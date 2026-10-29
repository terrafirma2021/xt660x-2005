'use strict';
(()=>{
  const key='xt660x-theme';
  const system=window.matchMedia('(prefers-color-scheme: dark)');
  let preference=null;
  try{preference=localStorage.getItem(key)}catch{}
  if(!['light','dark'].includes(preference))preference=null;
  function apply(theme){
    document.documentElement.dataset.theme=theme;
    const button=document.getElementById('theme-toggle');
    if(button){
      button.textContent=theme==='dark'?'Dark mode':'Light mode';
      button.setAttribute('aria-label','Switch to '+(theme==='dark'?'light':'dark')+' theme');
      button.setAttribute('aria-pressed',String(theme==='dark'));
    }
    document.dispatchEvent(new CustomEvent('xt660x-themechange',{detail:{theme}}));
  }
  apply(preference||(system.matches?'dark':'light'));
  document.addEventListener('DOMContentLoaded',()=>apply(document.documentElement.dataset.theme));
  document.addEventListener('click',event=>{
    if(!event.target.closest('#theme-toggle'))return;
    preference=document.documentElement.dataset.theme==='dark'?'light':'dark';
    try{localStorage.setItem(key,preference)}catch{}
    apply(preference);
  });
  system.addEventListener('change',()=>{if(!preference)apply(system.matches?'dark':'light')});
  window.addEventListener('storage',event=>{
    if(event.key!==key&&event.key!==null)return;
    preference=['light','dark'].includes(event.newValue)?event.newValue:null;
    apply(preference||(system.matches?'dark':'light'));
  });
})();
