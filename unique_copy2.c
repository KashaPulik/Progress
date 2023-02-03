#include<stdio.h>

int unique_copy(int mas[], int size, int *copy)
{
    int i, r;

    for(i = 0; i < size - 1; i++){
        r++;
        if(i < size - 1){
            while(mas[i] == mas[i + 1]){
                if(i + 1 == size - 1){
                    break;
                }
                i++;
            }
        }
    }
    
}