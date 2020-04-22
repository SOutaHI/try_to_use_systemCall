#include <stdio.h>

struct foo
{
    char a;
    int b;
} f ;

int main(void)
{
    printf("%zu, %zu, %zu\n", sizeof(char), sizeof(int), sizeof(struct foo));
    printf("%p, %p, %p\n", &f, &f.a, &f.b);
}