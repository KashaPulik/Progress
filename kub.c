#include<stdio.h>

struct point
{
    int x;
    int y;
};

struct rectangle
{
    struct point p1;
    struct point p2;
};

int is_point_inside_rectangle(struct rectangle ABCD, struct point H)
{
    if( ((H.x > ABCD.p1.x) & (H.x < ABCD.p2.x)) & ((H.y > ABCD.p1.y) & (H.y < ABCD.p2.y)) ){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    struct point H;
    struct rectangle ABCD;
    printf("Введите координаты крайних точек прямоугольника\n");
    printf("Сначала координаты крейней нижней точки:\n");
    printf("x = ");
    scanf("%d", &ABCD.p1.x);
    printf("y = ");
    scanf("%d", &ABCD.p1.y);
    printf("Отлично, теперь верхняя правая точка\n");
    printf("x = ");
    scanf("%d", &ABCD.p2.x);
    printf("y = ");
    scanf("%d", &ABCD.p2.y);

    printf("Координаты нижней левой точки: (%d, %d)\n", ABCD.p1.x, ABCD.p1.y);
    printf("Координаты верхней правой точки: (%d, %d)\n", ABCD.p2.x, ABCD.p2.y);

    printf("Введите координаты точки, которую нужно проверить\n");
    printf("x = ");
    scanf("%d", &H.x);
    printf("y = ");
    scanf("%d", &H.y);

    if(is_point_inside_rectangle(ABCD, H)){
        printf("Эта точка находится внутри заданного прямоугольника\n");
    }else{
        printf("Эта точка не находится внутри заданного прямоугольника\n");
    }
}