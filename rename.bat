@ECHO OFF


FOR /f %%a IN ('dir /b "source\*.pkg"') DO (
    copy source\%%a source\%%~na.pog
)