#include<stdio.h>
#include<string.h>

enum
{
    max = 40
};

int string_to_int(int x, char a[x])
{
    int plus, ch = 0, i, j, r, f = 0;
    r = sizeof(a) - 2;
    for(i = 0; i < sizeof(a) - 1; i++){
        if(a[i] == '-'){
            f = 1;
            r--;
            continue;
        }
        if(a[i] == '+'){
            r--;
            continue;
        }
        switch (a[i]){
            case 0:
                ch = ch * 10;
            case 1:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 1;
            case 2:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 2;
            case 3:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 3;
            case 4:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 4;
            case 5:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 5;
            case 6:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 6;
            case 7:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 7;
            case 8:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 8;
            case 9:
                plus = 1;
                for(j = r; j > 0; j--){
                    plus = plus * 10;
                }
                r--;
                ch = ch + plus * 9;
            
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