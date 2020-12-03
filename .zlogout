/home/newtql/.zlogin

pretime=${ontime}
echo ${pretime}

nowtime=`date +"%s"`
echo ${nowtime}

online=$[ ${nowtime} - ${pretime} ]
echo ${online}
echo ${online} > /home/newtql/longinout.txt
