'use strict';
const searchFiles=document.getElementById('file-search');
const locationFiles=document.getElementById('file-location');
const files=[...document.querySelectorAll('.file-index li')];
function filterFiles(){
  const query=searchFiles.value.trim().toLowerCase();let visible=0;
  for(const file of files){
    const match=(!query||file.dataset.search.includes(query))&&(!locationFiles.value||file.dataset.location.startsWith(locationFiles.value));
    file.hidden=!match;if(match)visible++;
  }
  document.getElementById('file-count').textContent=`${visible} of ${files.length} files`;
  document.getElementById('file-empty').hidden=visible!==0;
}
[searchFiles,locationFiles].forEach(control=>control.addEventListener('input',filterFiles));
filterFiles();
