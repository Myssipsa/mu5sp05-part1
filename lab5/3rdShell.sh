#/bin/sh

cd $1

if [ -d $1 ]
then
	for i in `ls -a`; do
		if [ -d $i ]
		then
			echo "$i"
		fi
	done
else
	echo "Le répértoire indiqué n'est pas valide"

fi

