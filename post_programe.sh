#!/bin/bash 
git config --global user.email "2590393048@qq.com"
git config --global user.name "xyldmc"
echo "push start"
cd "https://github.com/xyldmc/Linux_program/"
git add .
git commit -m $1
git push origin master
echo "push end"

