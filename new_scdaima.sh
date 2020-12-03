#!/bin/bash
nowGMT=`date -u +"%Y-%m-%d-%H-%M-%S"`

echo ${nowGMT}

var=`date "+%Y-%m-%d-%H-%M-%S"`

echo ${var}

git init

git add ./ 

git commit -m $var

git remote add origin https://github.com/xyldmc/Linux_program.git

git push -u origin master
