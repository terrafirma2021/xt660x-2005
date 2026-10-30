"""Normalize Ghidra text and retain reproducible compressed raw p-code."""
from pathlib import Path
import gzip
ROOT=Path(__file__).resolve().parents[1]
folder=ROOT/'analysis/firmware/families/late'
for p in folder.rglob('*'):
    if p.is_file() and p.suffix in ('.tsv','.c','.jsonl'):
        p.write_text(p.read_text(encoding='utf-8'),encoding='utf-8',newline='\n')
source=folder/'full/instructions.jsonl'
if source.exists():
    source.with_suffix('.jsonl.gz').write_bytes(gzip.compress(source.read_bytes(),mtime=0))
print('Family text normalized and raw p-code compressed.')
