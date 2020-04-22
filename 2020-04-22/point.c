#include <stdio.h>

struct point
{
    int x;
    int y;
} p;

int is_equal(struct point *p1, struct point *p2)
{
    return (p1->x == p2->x) && (p1->y == p2->y);
}

int main(void)
{
    struct point p1 = {10, 20};
    struct point p2 = {30, 30};
    printf("%d\n",is_equal(&p1, &p2));
    printf("%d\n",is_equal(&p1, &p1));

}