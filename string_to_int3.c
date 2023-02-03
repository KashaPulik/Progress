#include<stdio.h>

int string_to_int(char a[])
{
    int i, j, r, plus, f = 0, ch = 0, check, ssize = 0;

    
    for(i = 0;;i++){
        if(a[i] == '\n'){
            break;
        }else{
            ssize++;
        }
    }

    r = ssize - 1;
    for(i = 0; i < ssize; i++){
        plus = 1;
        check = 49;
        if(a[i] == '+'){
            r--;
            continue;
        }
        if(a[i] == '-'){
            f = 1;
            r--;
            continue;
        }
        if(a[i] == 48){
            r--;
            continue;
        }
        while(a[i] != check){
            check++;
        }
        check = check - 48;
        for(j = 0; j < r; j++){
            plus = plus * 10;
        }
        r--;
        ch = ch + check * plus;
    }
    if(f == 1){
        ch = 0 - ch;
    }
    return ch;
}

int main()
{
    char num[15];
    int ret;
    printf("Введите число: ");
    fgets(num, 14, stdin);
    ret = string_to_int(num);
    printf("Вот ваше число: %d\n", ret);
}