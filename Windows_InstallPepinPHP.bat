@echo off
cd %USERPROFILE%\Desktop
git clone https://github.com/WebSiteMaker24/PepinPHP.git
cd PepinPHP

REM Crée .env à partir de env.txt s’il existe
if exist env.txt (
    copy env.txt .env >nul
)

start code .
start http://localhost:8000
start cmd /k php -S localhost:8000 -t public_html
