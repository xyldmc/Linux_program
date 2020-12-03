#!/bin/bash
Start=$1
End=$2

function Usage(){
    echo "Usage : $0 start_num end_num"
    exit
}

if [[ $# -ne 2  ]];then
    Usage
fi

function is_prime(){
    num=$1
    for(( j=2; j<${num}; j++ ));do
        if [[ $[ ${num} % $j ] -eq 0 ]];then
            return 1
        fi
    done
    return 0
}
if [[ ${Start} -lt 2 ]];then
    Start=2
fi
for ((i=${Start}; i<=${End}; i++));do
    is_prime ${i}
    if [[ $? -eq 0 ]];then
        echo ${i}
        sum=$[ ${sum} + ${i} ]
    fi
done
echo $sum
