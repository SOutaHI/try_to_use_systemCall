while echo -n "Your name? "; read name; test "$name" != end;
do
    echo "Hello $name!"
done
echo "bye!"