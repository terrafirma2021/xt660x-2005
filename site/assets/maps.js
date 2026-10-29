'use strict';
const search=document.getElementById('map-search');
const statusFilter=document.getElementById('map-status');
const kindFilter=document.getElementById('map-kind');
const cards=[...document.querySelectorAll('.map-card')];
function filterMaps(){
  const query=search.value.trim().toLowerCase();let visible=0;
  for(const card of cards){
    const match=(!query||card.dataset.search.includes(query))&&(!statusFilter.value||card.dataset.status===statusFilter.value)&&(!kindFilter.value||card.dataset.kind===kindFilter.value);
    card.hidden=!match;if(match)visible++;
  }
  document.getElementById('map-count').textContent=`${visible} of ${cards.length} maps`;
  document.getElementById('map-empty').hidden=visible!==0;
}
[search,statusFilter,kindFilter].forEach(control=>control.addEventListener('input',filterMaps));
filterMaps();
