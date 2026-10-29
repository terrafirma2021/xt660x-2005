param(
    [Parameter(Mandatory=$true)][string]$GhidraHome,
    [Parameter(Mandatory=$true)][string]$JavaHome,
    [string]$Python='python'
)
$ErrorActionPreference='Stop'
$repoRoot=Split-Path $PSScriptRoot -Parent
$analysisRoot=Join-Path $repoRoot 'analysis'
$projectRoot=Join-Path $repoRoot 'analysis-work'
New-Item -ItemType Directory -Force -Path $projectRoot | Out-Null
$env:JAVA_HOME=$JavaHome
$moduleRoot=Join-Path $repoRoot 'ghidra\XT660CPU12'
$env:GHIDRA_HEADLESS_JAVA_OPTIONS='-Dghidra.external.modules='+$moduleRoot
& (Join-Path $GhidraHome 'support\sleigh.bat') (Join-Path $moduleRoot 'data\languages\HC12.slaspec')
if($LASTEXITCODE -ne 0){throw 'Processor model compilation failed'}
& (Join-Path $GhidraHome 'support\analyzeHeadless.bat') $projectRoot XT660 -import (Join-Path $repoRoot 'firmware\XT660X 2005.bin') -overwrite -processor 'XT660-CPU12:BE:16:default' -loader BinaryLoader -loader-baseAddr 0 -noanalysis -scriptPath $PSScriptRoot -postScript AnalyzeXT660.java $analysisRoot -postScript RefineXT660.java $analysisRoot
if($LASTEXITCODE -ne 0){throw 'Ghidra analysis failed'}
& (Join-Path $GhidraHome 'support\analyzeHeadless.bat') $projectRoot XT660 -process 'XT660X 2005.bin' -noanalysis -readOnly -scriptPath $PSScriptRoot -postScript ExportXT660.java $analysisRoot
if($LASTEXITCODE -ne 0){throw 'Ghidra database export failed'}
& $Python (Join-Path $PSScriptRoot 'catalog_maps.py')
if($LASTEXITCODE -ne 0){throw 'Map extraction failed'}
& $Python (Join-Path $PSScriptRoot 'lift_full.py')
if($LASTEXITCODE -ne 0){throw 'Complete C generation failed'}
& $Python (Join-Path $PSScriptRoot 'audit_full.py')
if($LASTEXITCODE -ne 0){throw 'Whole-image audit failed'}

& $Python (Join-Path $PSScriptRoot 'normalize_analysis_text.py')
if($LASTEXITCODE -ne 0){throw 'Text normalization failed'}
& $Python (Join-Path $PSScriptRoot 'build_semantic_catalog.py')
if($LASTEXITCODE -ne 0){throw 'Semantic catalogue failed'}
& $Python (Join-Path $PSScriptRoot 'catalog_calibration_accesses.py')
if($LASTEXITCODE -ne 0){throw 'Calibration access inventory failed'}
& $Python (Join-Path $PSScriptRoot 'fix_startup_checksum.py')
if($LASTEXITCODE -ne 0){throw 'Checksum correction failed'}
& $Python (Join-Path $PSScriptRoot 'sensor_profiles.py')
if($LASTEXITCODE -ne 0){throw 'Temperature profile inference failed'}
& $Python (Join-Path $PSScriptRoot 'decode_units.py')
if($LASTEXITCODE -ne 0){throw 'Unit catalogue failed'}
& $Python (Join-Path $PSScriptRoot 'map_names.py')
if($LASTEXITCODE -ne 0){throw 'Map naming failed'}
& $Python (Join-Path $PSScriptRoot 'verify_map_names.py')
if($LASTEXITCODE -ne 0){throw 'Map name verification failed'}
& $Python (Join-Path $PSScriptRoot 'verify_analysis.py')
if($LASTEXITCODE -ne 0){throw 'Verification failed'}
& $Python (Join-Path $PSScriptRoot 'build_pin_overview.py')
if($LASTEXITCODE -ne 0){throw 'MCU pin overview generation failed'}
& $Python (Join-Path $PSScriptRoot 'verify_pin_overview.py')
if($LASTEXITCODE -ne 0){throw 'MCU pin overview verification failed'}
