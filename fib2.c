#include<stdio.h>

int main()
{
    long long int i, n = 1, r, f1, f2;

    printf("Введите номер последовательности: ");
    scanf("%lld", &n);
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
    printf("Значение этого элемента равно %lld\n", r);
}