#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i;
    int sum = 0;
    for(i = 1;i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("sum is %d\n",sum);
    exit(90);
}
