"""Preserve legacy Pages entry points after the Yamaha XT660 migration."""
from pathlib import Path
from html import escape
import json
import shutil

ROOT=Path(__file__).resolve().parents[1]
DEST=ROOT/'_site'
NEW='https://terrafirma2021.github.io/yamaha-xt660/'
assert DEST.resolve()==ROOT.resolve()/'_site' and not DEST.is_symlink()
if DEST.exists():shutil.rmtree(DEST)
DEST.mkdir()
paths=json.loads((ROOT/'site/legacy-routes.json').read_text(encoding='utf-8'))
assert 'index.html' in paths and all(not p.startswith('/') and '..' not in Path(p).parts for p in paths)
for path in paths+['404.html']:
    destination=NEW+(path.removesuffix('index.html') if path!='404.html' else '')
    markup='''<!doctype html><html lang="en"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><meta name="robots" content="noindex"><title>Moved · Yamaha XT660 ECU Research</title>
<link rel="canonical" href="'''+escape(destination,quote=True)+'''"><style>body{font:18px/1.6 system-ui,sans-serif;background:#0c101a;color:#edf0fa;max-width:760px;padding:8vw 24px;margin:auto}a{color:#8da6ff}h1{font-size:clamp(30px,5vw,56px);line-height:1.1}</style></head><body><p>YAMAHA XT660 / ECU RESEARCH</p><h1>This project has moved.</h1><p>All firmware, maps, wiring and continuing research are now at <strong>yamaha-xt660</strong>.</p><p><a id="destination" href="'''+escape(destination,quote=True)+'''">Continue to Yamaha XT660 →</a></p><p><a href="https://github.com/terrafirma2021/yamaha-xt660">Open the new GitHub repository</a></p><noscript>Follow the link above to continue.</noscript><script>
(()=>{const target=new URL('''+json.dumps(destination)+''');const prefix='/xt660x-2005/';
if(location.pathname.startsWith(prefix))target.pathname='/yamaha-xt660/'+location.pathname.slice(prefix.length);
target.search=location.search;target.hash=location.hash;
document.getElementById('destination').href=target.href;
location.replace(target.href);})();
</script></body></html>'''
    out=DEST/path;out.parent.mkdir(parents=True,exist_ok=True);out.write_text(markup,encoding='utf-8',newline='\n')
# Direct historical image/SVG links remain usable; HTML routes point to current research.
shutil.copytree(ROOT/'site/assets',DEST/'assets')
(DEST/'pins').mkdir(exist_ok=True)
for filename in ('mcu_pin_overview.svg','ecu_connector.svg','mcu_pin_overview.json'):
    shutil.copyfile(ROOT/'analysis/semantics'/filename,DEST/'pins'/filename)
(DEST/'.nojekyll').write_text('')
print(f'Built {len(paths)} legacy page redirects plus a 404 fallback. Destination: {NEW}')
