
#!/bin/sh
i=1
while [ $i -le 10 ]
do

	wget -p  https://xkcd.com/$i/

	url=`grep hotlinking xkcd.com/$i/index.html | cut -d '"' -f 2`

	wget -p $url
	
	i=`expr $i + 1`
        	
done
