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
  };
  select(selected);
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
