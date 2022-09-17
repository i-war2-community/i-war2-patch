@ECHO OFF

IF NOT EXIST "output" mkdir "output"
IF NOT EXIST "output\headers" mkdir "output\headers"

"%I_WAR2%\bin\release\pc.exe" -i "include" -pp "output" -hp "output\headers" "source\%1.pkg.pog"