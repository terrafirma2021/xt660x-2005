param(
    [Parameter(Mandatory=$true)][string]$GhidraHome,
    [Parameter(Mandatory=$true)][string]$JavaHome,
    [string]$Python='python'
)
$ErrorActionPreference='Stop'
$repoRoot=Split-Path $PSScriptRoot -Parent
$analysisRoot=Join-Path $repoRoot 'analysis'
$projectRoot=Join-Path $repoRoot '.analysis-work'
New-Item -ItemType Directory -Force -Path $projectRoot | Out-Null
$env:JAVA_HOME=$JavaHome
& (Join-Path $GhidraHome 'support\analyzeHeadless.bat') $projectRoot XT660 -import (Join-Path $repoRoot 'firmware\XT660X 2005.bin') -overwrite -processor 'HC-12:BE:16:default' -loader BinaryLoader -loader-baseAddr 0 -noanalysis -scriptPath $PSScriptRoot -postScript AnalyzeXT660.java $analysisRoot
if($LASTEXITCODE -ne 0){throw 'Ghidra analysis failed'}
& (Join-Path $GhidraHome 'support\analyzeHeadless.bat') $projectRoot XT660 -process 'XT660X 2005.bin' -noanalysis -readOnly -scriptPath $PSScriptRoot -postScript ExportXT660.java $analysisRoot
if($LASTEXITCODE -ne 0){throw 'Ghidra database export failed'}
& $Python (Join-Path $PSScriptRoot 'catalog_maps.py')
if($LASTEXITCODE -ne 0){throw 'Map extraction failed'}
& $Python (Join-Path $PSScriptRoot 'verify_analysis.py')
if($LASTEXITCODE -ne 0){throw 'Verification failed'}
