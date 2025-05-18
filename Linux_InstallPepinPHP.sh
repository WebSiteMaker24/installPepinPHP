#!/bin/bash

cd ~/Desktop || exit 1
git clone https://github.com/WebSiteMaker24/PepinPHP.git
cd PepinPHP || exit 1
code .
php -S localhost:8000 -t public_html/public
