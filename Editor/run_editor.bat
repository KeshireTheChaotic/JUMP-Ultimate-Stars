@echo off
setlocal
cd /d "%~dp0"
if "%JUS_DATA_ROOT%"=="" set "JUS_DATA_ROOT=D:\Library\Development\JUS\data"
py -3 -c "import PIL" 2>nul || py -3 -m pip install -r requirements.txt
py -3 -m app.editor %*
