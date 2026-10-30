'use strict';
const firmwareData=JSON.parse(document.getElementById('firmware-data').textContent);
const firmwareSelect=document.getElementById('firmware-select');
const scope=document.getElementById('firmware-scope');
const requested=new URLSearchParams(location.search).get('firmware');
const chosen=firmwareData.images.find(i=>i.id===requested);
firmwareSelect.value=chosen?chosen.id:firmwareData.primary_id;
function selectFirmware(){
  const image=firmwareData.images.find(i=>i.id===firmwareSelect.value);
  const available=image.shared_map_count>0;
  const link=document.createElement('a');link.href=`../firmware/${image.id}/`;link.textContent='Image record ↗';
  scope.replaceChildren(document.createTextNode(available?`${image.label}: shared map cells and stored axes verified identical. Physical-unit caveats still apply. `:`${image.label}: no reviewed map catalogue. `),link);
  for(const selector of ['.map-grid','.filters','#map-count','#map-empty'])document.querySelector(selector).hidden=!available;
  if(available)filterMaps();
  const url=new URL(location);url.searchParams.set('firmware',image.id);history.replaceState(null,'',url);
}
firmwareSelect.addEventListener('change',selectFirmware);selectFirmware();
