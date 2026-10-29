'use strict';
(()=>{
  const canvas=document.getElementById('map-preview');
  if(!canvas)return;
  const ctx=canvas.getContext('2d');
  let maps=[],current=0,row=0,column=0,inspect=false;
  const name=document.getElementById('preview-name'),meta=document.getElementById('preview-meta');
  const shape=document.getElementById('preview-shape'),output=document.getElementById('preview-cell');
  const link=document.getElementById('preview-link');
  function draw(){
    if(!maps.length)return;
    const m=maps[current],values=m.raw_values.flat(),low=Math.min(...values),high=Math.max(...values);
    const w=canvas.width,h=canvas.height,cw=w/m.columns,ch=h/m.rows;
    ctx.fillStyle='#090d18';ctx.fillRect(0,0,w,h);
    if(m.rows===1){
      ctx.strokeStyle='#29334d';ctx.lineWidth=1;
      for(let g=0;g<5;g++){const y=24+g*(h-48)/4;ctx.beginPath();ctx.moveTo(24,y);ctx.lineTo(w-24,y);ctx.stroke();}
      ctx.strokeStyle='#759aff';ctx.lineWidth=4;ctx.beginPath();
      values.forEach((value,c)=>{const x=24+c*(w-48)/(m.columns-1),y=h-24-(value-low)/(high-low||1)*(h-48);if(c)ctx.lineTo(x,y);else ctx.moveTo(x,y);});ctx.stroke();
      values.forEach((value,c)=>{ctx.fillStyle=inspect&&c===column?'#fff':'#759aff';ctx.beginPath();ctx.arc(24+c*(w-48)/(m.columns-1),h-24-(value-low)/(high-low||1)*(h-48),inspect&&c===column?7:3,0,Math.PI*2);ctx.fill();});
    }else m.raw_values.forEach((line,r)=>line.forEach((value,c)=>{
      const t=(value-low)/(high-low||1);
      ctx.fillStyle=t<.62?`hsl(${228-t*35} 90% ${22+t*80}%)`:`hsl(${40-(t-.62)*105} 95% ${68-(t-.62)*45}%)`;
      ctx.fillRect(c*cw+1,r*ch+1,Math.max(1,cw-2),Math.max(1,ch-2));
    }));
    if(inspect){if(m.rows>1){ctx.strokeStyle='#fff';ctx.lineWidth=3;ctx.strokeRect(column*cw+2,row*ch+2,cw-4,ch-4);}output.textContent=`ROW ${row+1} / COL ${column+1} · RAW ${m.raw_values[row][column]}`;}
    else output.textContent='POINT TO A CELL · ARROW KEYS TO EXPLORE';
  }
  function select(i){current=i;row=column=0;inspect=false;const m=maps[i];
    name.textContent=m.display_name;meta.textContent=`${m.data_address} / ${m.rows} × ${m.columns} / ${m.element_bytes*8}-BIT`;
    shape.textContent=`${m.rows} ROWS / ${m.columns} COLUMNS`;link.href=`docs/map_details/${m.id}.html`;
    document.querySelector('.display-bottom>span').innerHTML=m.rows===1?'RAW VALUE / CELL INDEX':'LOW <i class="scale" aria-hidden="true"></i> HIGH';
    canvas.setAttribute('aria-label',`${m.display_name}, raw stored values. Use arrow keys to inspect cells. Full accessible values are available through Open this map.`);
    document.querySelectorAll('[data-map]').forEach(b=>b.setAttribute('aria-pressed',String(Number(b.dataset.map)===i)));draw();
  }
  document.querySelectorAll('[data-map]').forEach(b=>b.addEventListener('click',()=>{if(maps.length)select(Number(b.dataset.map));}));
  function point(e){if(!maps.length)return;const r=canvas.getBoundingClientRect(),m=maps[current];column=Math.min(m.columns-1,Math.max(0,m.rows===1?Math.round(((e.clientX-r.left)/r.width*canvas.width-24)/(canvas.width-48)*(m.columns-1)):Math.floor((e.clientX-r.left)/r.width*m.columns)));row=Math.min(m.rows-1,Math.max(0,Math.floor((e.clientY-r.top)/r.height*m.rows)));inspect=true;draw();}
  canvas.addEventListener('pointermove',point);
  canvas.addEventListener('pointerdown',point);
  canvas.addEventListener('keydown',e=>{if(!maps.length||!['ArrowLeft','ArrowRight','ArrowUp','ArrowDown'].includes(e.key))return;e.preventDefault();const m=maps[current];column=Math.max(0,Math.min(m.columns-1,column+(e.key==='ArrowRight')-(e.key==='ArrowLeft')));row=Math.max(0,Math.min(m.rows-1,row+(e.key==='ArrowDown')-(e.key==='ArrowUp')));inspect=true;draw();});
  fetch('assets/home-maps.json').then(r=>{if(!r.ok)throw Error('Map data unavailable');return r.json();}).then(data=>{maps=data;select(0);}).catch(()=>{output.textContent='PREVIEW UNAVAILABLE · OPEN THE MAP TO READ THE VALUES';});
})();
