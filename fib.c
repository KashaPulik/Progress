#include<stdio.h>

int main()
{
    int i, n = 1, r, f1, f2;

//    printf("Введите номер последовательности: ");
//    scanf("%d", &n);
    while(n <= 1000000){
        i = 0;
        f1 = 1;
        f2 = 1;
        r = 1;

        while(i < n - 2){
            r = f1 + f2;
            f1 = f2;
            f2 = r;
            i++;
        }
        if(n*n == r){
            printf("%d элемент рядя числе Фибоначчи равен своему квадрату %d\n", n, r);
        }
        printf("Программа только что посчитала %d Элемент \n", n);
        n++;
    }
}