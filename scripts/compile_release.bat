@ECHO OFF
SETLOCAL ENABLEDELAYEDEXPANSION
RMDIR "output" /s /q
mkdir "output"
mkdir "output\headers"

FOR /f %%a IN ('dir /b "source\*.pog"') DO (
    SET CHANGED=""
    git diff --exit-code --name-only HEAD F14 -- .\source\%%a > changed.tmp
    SET /p CHANGED=<"C:\Projects\i-war2-patch\changed.tmp"
    DEL changed.tmp
    IF EXIST !CHANGED! "%I_WAR2%\bin\release\pc.exe" -i "include" -pp "output" -hp "output\headers" "source\%%a"
)

ECHO "Build Release Complete!"