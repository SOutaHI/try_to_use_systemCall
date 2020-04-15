for f in $@
do
    echo -n "$f : "
    head -n 1 $f
done