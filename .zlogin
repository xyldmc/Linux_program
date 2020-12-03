
ontime1=`date +"%s"`
ontime=${ontime1}
#echo ${ontime}
#`curl wttr.in/qingdao -o /home/newtql/weather.txt`
`curl wttr.in/beijing -o /home/newtql//weather.txt`
echo "`cat /home/newtql/weather.txt | head -n 17`"
echo "`fortune -s | cowsay -f dragon`"
echo "`last newtql | head -n 2 | tail -n 1`"
echo -e "欢迎登录 \033[31;36m`whoami`\033[0m \033[31m今天也是充满希望的一天！\033[0m"
