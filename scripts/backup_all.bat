@ECHO OFF

IF NOT EXIST "backup" mkdir "backup"

COPY "%I_WAR2%\resource\packages\*.pkg" "backup\"