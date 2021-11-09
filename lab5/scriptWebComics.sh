#!/bin/sh
i=1
while [ $i -le 10 ]
do

	wget -P $HOME/Desktop/M2_SysCom_2021/Modules/Systèmes_Embarqués/TPs/mu5sp05-part1/lab5 https://xkcd.com/$i

	wget -P $HOME/Desktop/M2_SysCom_2021/Modules/Systèmes_Embarqués/TPs/mu5sp05-part1/lab5 `grep hotlinking $i` 
	
	
	
	
	
	i=`expr $i + 1`
        echo "$i"	
done
