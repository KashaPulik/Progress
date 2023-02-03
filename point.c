#include<stdio.h>


void main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p;

    p = A;

    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p = p + 4;
    printf("%d\n", *p);


}