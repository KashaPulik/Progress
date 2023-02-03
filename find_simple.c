#include<stdio.h>

int main()
{
    int n = 2, i, flag;
    while(n < 100){
        flag = 1;
        for(i = 2; i < n; i++){
            if(n % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("%d\n", n);
        }
        n++;
    }
}