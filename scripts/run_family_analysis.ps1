param(
    [Parameter(Mandatory=$true)][string]$GhidraHome,
    [Parameter(Mandatory=$true)][string]$JavaHome,
    [string]$Python='python'
)
$ErrorActionPreference='Stop'
$taskRepo=Split-Path $PSScriptRoot -Parent
$taskWork=Join-Path $taskRepo '.analysis-work'
$familyOutput=Join-Path $taskRepo 'analysis/firmware/families/late'
New-Item -ItemType Directory -Force -Path $taskWork | Out-Null
$source=Join-Path $taskRepo 'firmware/images/xt660-5vk-11.bin'
if((Get-FileHash -LiteralPath $source -Algorithm SHA256).Hash -ne 'b23ee5e64fcbb7cffc0a6d358c84163fc6608be9c8e222c32c85acef6d675067'){
    throw 'Source BIN identity mismatch'
}
$normalized=Join-Path $taskWork 'late-family-full.bin'
$prefix=New-Object byte[] 6144
[Array]::Fill[byte]($prefix,255)
[IO.File]::WriteAllBytes($normalized,($prefix+[IO.File]::ReadAllBytes($source)))
$env:JAVA_HOME=$JavaHome
$env:GHIDRA_HEADLESS_JAVA_OPTIONS='-Dghidra.external.modules='+ (Join-Path $taskRepo 'ghidra/XT660CPU12')
& (Join-Path $GhidraHome 'support/analyzeHeadless.bat') $taskWork LateFamily -import $normalized -overwrite -processor 'XT660-CPU12:BE:16:default' -loader BinaryLoader -loader-baseAddr 0 -noanalysis -scriptPath $PSScriptRoot -postScript AnalyzeApplicationFamily.java $familyOutput (Join-Path $familyOutput 'entry_candidates.tsv') (Join-Path $familyOutput 'reviewed_entries.tsv')
if($LASTEXITCODE -ne 0){throw 'Ghidra family analysis failed'}
& $Python (Join-Path $PSScriptRoot 'pack_family_analysis.py')
if($LASTEXITCODE -ne 0){throw 'Analysis packaging failed'}
& $Python (Join-Path $PSScriptRoot 'decode_firmware_maps.py')
if($LASTEXITCODE -ne 0){throw 'Map extraction failed'}
& $Python (Join-Path $PSScriptRoot 'audit_firmware_families.py')
if($LASTEXITCODE -ne 0){throw 'Family verification failed'}
