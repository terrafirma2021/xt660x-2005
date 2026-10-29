document.querySelectorAll('.calibration-grid').forEach(grid=>{
  const cells=[...grid.querySelectorAll('.map-cell')];
  const columns=Number(grid.dataset.columns);
  const output=grid.querySelector('.grid-inspector');
  const scroll=grid.querySelector('.grid-scroll');
  const corner=grid.querySelector('.grid-corner');
  const padding=()=>{scroll.style.scrollPaddingTop=corner.offsetHeight+4+'px';scroll.style.scrollPaddingLeft=corner.offsetWidth+4+'px'};
  padding();new ResizeObserver(padding).observe(corner);
  let selected=cells[0];
  const select=cell=>{
    selected.tabIndex=-1;
    selected.classList.remove('selected');
    selected=cell;
    cell.tabIndex=0;
    cell.classList.add('selected');
    output.textContent=cell.getAttribute('aria-label');
    grid.querySelectorAll('.curve-knot').forEach(dot=>dot.classList.toggle('selected',Number(dot.dataset.cell)===Number(cell.dataset.column)));
  };
  select(selected);
  const plot=grid.querySelector('.curve-plot');
  if(plot){
    const data=JSON.parse(grid.querySelector('.curve-data').textContent);
    const scale=grid.querySelector('.curve-scale'),adc=grid.querySelector('.curve-adc');
    let span=790;
    const x=value=>70+(value-data.xmin)/(data.xmax-data.xmin||1)*span;
    const render=()=>{
      span=grid.clientWidth<600?360:790;plot.setAttribute('viewBox','0 0 '+(span+110)+' 320');
      plot.querySelectorAll('.curve-guide').forEach(line=>line.setAttribute('x2',70+span));
      plot.querySelectorAll('.curve-x-tick').forEach(tick=>tick.setAttribute('x',x(Number(tick.textContent))));
      plot.querySelector('.curve-x-label').setAttribute('x',70+span/2);
      plot.querySelectorAll('.curve-knot').forEach(dot=>dot.setAttribute('cx',x(data.knots[Number(dot.dataset.cell)][0])));
      const candidate=scale?.value==='candidate';
      const convert=value=>candidate?value*.625-30:value;
      const low=convert(data.ymin),high=convert(data.ymax);
      const y=value=>260-(convert(value)-low)/(high-low)*210;
      const label=candidate?'Candidate °C — conditional':data.sensor?'Internal temperature code':'Raw cell value';
      plot.querySelector('.curve-y-label').textContent=label;
      plot.setAttribute('aria-label',label+' versus raw input coordinate');
      plot.querySelectorAll('.curve-y-tick').forEach((tick,i)=>tick.textContent=Number((low+(high-low)*i/4).toFixed(3)));
      plot.querySelector('.curve-line').setAttribute('d',data.samples.map(([a,v],i)=>(i?'L':'M')+x(a)+','+y(v)).join(' '));
      if(adc){
        const a=Number(adc.value),raw=data.samples[a][1];
        const probe=plot.querySelector('.curve-probe');probe.setAttribute('cx',x(a));probe.setAttribute('cy',y(raw));probe.setAttribute('visibility','visible');
        grid.querySelector('.curve-reading').textContent='ADC '+a+' → internal code '+raw+(candidate?' → candidate '+Number(convert(raw).toFixed(3))+' °C (conditional)':'');
      }
    };
    plot.addEventListener('click',event=>{const knot=event.target.closest('.curve-knot');if(knot)cells[Number(knot.dataset.cell)].focus({preventScroll:true})});
    scale?.addEventListener('change',render);adc?.addEventListener('input',render);render();new ResizeObserver(render).observe(grid);
  }
  grid.addEventListener('focusin',event=>{if(event.target.matches('.map-cell'))select(event.target)});
  grid.addEventListener('click',event=>{if(event.target.matches('.map-cell'))select(event.target)});
  grid.addEventListener('keydown',event=>{
    if(!event.target.matches('.map-cell'))return;
    const index=cells.indexOf(event.target),row=Math.floor(index/columns),column=index%columns;
    let next=index;
    if(event.key==='ArrowRight')next=column<columns-1?index+1:index;
    else if(event.key==='ArrowLeft')next=column>0?index-1:index;
    else if(event.key==='ArrowDown')next=row<cells.length/columns-1?index+columns:index;
    else if(event.key==='ArrowUp')next=Math.max(column,index-columns);
    else if(event.key==='Home')next=event.ctrlKey?0:row*columns;
    else if(event.key==='End')next=event.ctrlKey?cells.length-1:(row+1)*columns-1;
    else return;
    event.preventDefault();cells[next].focus({preventScroll:true});
    cells[next].scrollIntoView({block:'nearest',inline:'nearest'});
  });
  grid.querySelector('.grid-colours').addEventListener('change',event=>{
    grid.classList.toggle('no-colours',!event.target.checked);
  });
});
