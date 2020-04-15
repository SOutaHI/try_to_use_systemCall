echo -n "count? :"
read cnt
x=0
while (($x < $cnt))
do
    if test -a data$x.txt
    then
        echo "data$x.txt exists"
    else
        echo dummy > data$x.txt
    fi
    x=$(($x + 1))
done
