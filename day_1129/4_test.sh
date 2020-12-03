#!/bin/bash
TargetFile="a.c"
if [[ -r ${TargetFile} ]];then
    gcc a.c -o test.out
    ./test.out
else
    echo "${TargetFile} not Found!"
fi
