#include<stdio.h>

enum
{
    max = 10
};

int string_to_int(char *a)
{
    int i, j, f, r, ch = 0, plus, ssize;
    char test;
    i = 0;
    while(1){
        test = a[i];
        if(test == '\n'){
            break;
        }else{
            ssize++;
            i++;
        }
    }
    r = ssize - 1;

    for(i = 0; i < ssize; i++){
        test = a[i];
        if(test == '-'){
            f = 1;
            r--;
            continue;
        }
        if(test == '+'){
            r--;
            continue;
        }
        switch (test){
            case '0':
                ch = ch * 10;
                continue;
            case '1':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 1;
                continue;
            case '2':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 2;
                continue;
            case '3':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 3;
                continue;
            case '4':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 4;
                continue;
            case '5':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 5;
                continue;
            case '6':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 6;
                continue;
            case '7':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 7;
                continue;
            case '8':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 8;
                continue;
            case '9':
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 9;
                continue;
            
        }
    }
    if(f == 1){
        ch = 0 - ch;
    }
    return ch;
}

int main()
{
    char num[max];
    int m;
    printf("Введите число: ");
    fgets(num, max - 1, stdin);
    m = string_to_int(num);
    printf("Вот ваше число %d\n", m);
}