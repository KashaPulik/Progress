#include<stdio.h>

int main()
{
    int a[10];
    int i, left, perexod, buffer;

    printf("Заполните массив числами:\n");
    for(i = 0; i < 10; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for(i = 1; i < 10; i++){
        buffer = a[i];
        left = i - 1;
        while(a[left] > buffer){
            perexod = a[left];
            a[left] = a[left + 1];
            a[left + 1] = perexod;
            left--;
        }
        a[left + 1] = buffer;
    }
    for(i = 0; i < 9; i++){
        printf("a[%d] = %d, ", i, a[i]);
    }
    printf("a[9] = %d\n", a[10]);
}