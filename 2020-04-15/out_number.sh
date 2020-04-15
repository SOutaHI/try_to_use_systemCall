echo -n "n? "
read n
x=1
while test $(($x <= $n)) == 1
do
    echo -n "$x "
    x=$(($x + 1))
done
echo