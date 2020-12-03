#!/bin/bash
echo '--------------------------------------------------------------------------------------------------------'
json=`curl -s http://t.weather.sojson.com/api/weather/city/101010100` 
echo $json > /home/newtql/homework1/weather.json
json=$(cat /home/newtql/homework1/weather.json)
city=`echo $json | jq '.cityInfo.city' | sed 's/\"//g' `
wendu=`echo $json | jq '.data.wendu' | sed 's/\"//g' `
shidu=`echo $json | jq '.data.shidu' | sed 's/\"//g' `
quality=`echo $json | jq '.data.quality' | sed 's/\"//g' `
ganmao=`echo $json | jq '.data.ganmao' | sed 's/\"//g' `
     
high=`echo $json | jq '.data.forecast[0].high' | sed 's/\"//g' `
low=`echo $json | jq '.data.forecast[0].low' | sed 's/\"//g' `
fx=`echo $json | jq '.data.forecast[0].fx' | sed 's/\"//g' `
fl=`echo $json | jq '.data.forecast[0].fl' | sed 's/\"//g' `
type=`echo $json | jq '.data.forecast[0].type' | sed 's/\"//g' `
notice=`echo $json | jq '.data.forecast[0].notice' | sed 's/\"//g' `
     
high2=`echo $json | jq '.data.forecast[1].high' | sed 's/\"//g' `
low2=`echo $json | jq '.data.forecast[1].low' | sed 's/\"//g' `
fx2=`echo $json | jq '.data.forecast[1].fx' | sed 's/\"//g' `
fl2=`echo $json | jq '.data.forecast[1].fl' | sed 's/\"//g' `
type2=`echo $json | jq '.data.forecast[1].type' | sed 's/\"//g' `
notice2=`echo $json | jq '.data.forecast[1].notice' | sed 's/\"//g' `
     
high3=`echo $json | jq '.data.forecast[2].high' | sed 's/\"//g' `
low3=`echo $json | jq '.data.forecast[2].low' | sed 's/\"//g' `
fx3=`echo $json | jq '.data.forecast[2].fx' | sed 's/\"//g' `
fl3=`echo $json | jq '.data.forecast[2].fl' | sed 's/\"//g' `
type3=`echo $json | jq '.data.forecast[2].type' | sed 's/\"//g' `
notice3=`echo $json | jq '.data.forecast[2].notice' | sed 's/\"//g' `
     
high4=`echo $json | jq '.data.forecast[3].high' | sed 's/\"//g' `
low4=`echo $json | jq '.data.forecast[3].low' | sed 's/\"//g' `
fx4=`echo $json | jq '.data.forecast[3].fx' | sed 's/\"//g' `
fl4=`echo $json | jq '.data.forecast[3].fl' | sed 's/\"//g' `
type4=`echo $json | jq '.data.forecast[3].type' | sed 's/\"//g' `
notice4=`echo $json | jq '.data.forecast[3].notice' | sed 's/\"//g' `
     
echo '您现在在'$city'，当前气温'$wendu'度，湿度'$shidu'，空气质量'$quality'，'$ganmao'。'
echo '今天天气'$type'，最'$high'，最'$low'，'$fx'，风力'$fl'，'$notice'。'
echo '明天天气'$type2'，最'$high2'，最'$low2'，'$fx2'，风力'$fl2'，'$notice2'。'
echo '后天天气'$type3'，最'$high3'，最'$low3'，'$fx3'，风力'$fl3'，'$notice3'。'
echo '大后天天气'$type4'，最'$high4'，最'$low4'，'$fx4'，风力'$fl4'，'$notice4'。'
     
echo '--------------------------------------------------------------------------------------------------------'
