#!/bin/bash 
#git config --global user.email "2590393048@qq.com"
#git config --global user.name "xyldmc"
git remote rm origin

git remote add origin 'https://github.com/xyldmc/Linux_program.git'
git pull remote master
git add .
git commit -m $1
git push origin master --force
if [[ "$?" -eq "0" ]];then
    echo -e "\033[42;34m push to github success! \033[0m"
else
    echo -e "\033[41;30m push to github fail! \033[0m"
    exit 1
fi

