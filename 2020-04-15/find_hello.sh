for f in "$@"
do
    if grep -q Hello $f 
    then
        echo "$f has Hello"
    else
        echo "$f dose not has Hello"
    fi
done