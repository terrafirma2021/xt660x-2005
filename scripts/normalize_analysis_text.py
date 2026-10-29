"""Use LF for reproducible Git content and hashes, including Windows-generated exports."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
extensions = {'.md','.txt','.tsv','.c','.h','.py','.java','.json','.jsonl','.asm',
              '.ps1','.sinc','.slaspec','.ldefs','.cspec','.pspec','.patch','.manifest'}
files = [ROOT/'README.md', ROOT/'.gitignore', ROOT/'.gitattributes']
for directory in ['analysis','scripts','ghidra']:
    files.extend(p for p in (ROOT/directory).rglob('*') if p.is_file() and p.suffix.lower() in extensions)
changed = 0
for path in files:
    data=path.read_bytes()
    if b'\r\n' in data:
        path.write_bytes(data.replace(b'\r\n',b'\n'))
        changed += 1
print(f'Normalized {changed} text files to LF.')
