#include <stdio.h>
#include <stddef.h>

struct foo
{
    char a;
    int b;
} f;

int main(void)
{
    printf("%zu\n", offsetof (struct foo , b));
}