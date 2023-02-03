#include<stdio.h>

int find_simple(int number)
{
    int flag = 1;
    while(1){
        flag = 1;
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 0){
            number++;
        }else{
            break;
        }
    }
    return number;
}

int main()
{
    int number, simple;
    printf("Введите число, которое требуется разложить: ");
    scanf("%d", &number);

    if(number == 1){
        printf("%d\n", 1);
    }

    while(number > 1){
        simple = 2;
        while(1){
            if(number % find_simple(simple) == 0){
                simple = find_simple(simple);
                break;
            }else{
                simple = find_simple(simple) + 1;
            }
        }
        printf("%d\n", simple);
        number = number / simple;
    }
}