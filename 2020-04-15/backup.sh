for f in "$@"
do
    base=$(expr $f : '\(.*\).c$')
    echo Copying $base.c to ${base}_orig.c
    cp $base.c ${base}_orig.c
done