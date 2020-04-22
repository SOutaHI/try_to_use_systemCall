#include <stdio.h>

struct rectangle
{
    int x;
    int y;
    int width;
    int height;
};

void rect_print(struct rectangle *p)
{
    printf("%d, %d, %d, %d\n ", p->x, p->y, p->width, p->height);
}

int rect_area(struct rectangle *p)
{
    return (p->width * p->height);
}

void rect_movel(struct rectangle *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}

struct rectangle rect_move2(struct rectangle r, int dx, int dy)
{
    struct rectangle r2 = r;
    rect_movel(&r2, dx, dy);
    return r2;
}

int point_is_included(struct rectangle *p, int x,int y)
{
    return (p->x <= x) && (x <= p->x + p->width)
        && (p->y <= y) && (y <= p->y + p->height);    
}

int rect_is_overlapped2 (struct rectangle *p1, struct rectangle *p2)
{
    return point_is_included(p1, p2->x, p2->y)
        || point_is_included(p1, p2->x + p2->width, p2->y)
        || point_is_included(p1, p2->x, p2->y + p2->height)
        || point_is_included(p1, p2->x + p2->width, p2->y + p2->height);
}

int rect_is_overlapped(struct rectangle *p1, struct rectangle *p2)
{
    return rect_is_overlapped2(p1, p2) || rect_is_overlapped2(p2, p1);
}

int main(void)
{
    struct rectangle r1 = {10,20,30,40};
    struct rectangle r2 = {20,10,30,40};
    rect_print(&r1);
    printf("%d\n", rect_is_overlapped(&r1,&r2));
    printf("%d\n", rect_is_overlapped(&r2,&r2));
}