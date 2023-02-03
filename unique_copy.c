#include<stdio.h>

int unique_copy(int *mas, int size, int *count)
{
    int i, j;
    *count = 0;
    for(i = 1; i < size; i++){
        if(mas[i] == mas[i - 1]){
            continue;
        }
        *count++;
    }
    *count++;
    int m[*count];
    i = 0;
    for(j = 0; j < *count; j++){
        for(; i < size - 1; i++){
            if(mas[i] == mas[i + 1]){
                continue;
            }else{
                break;
            }
        }
        m[j] = mas[i];
        i++;
    }
    return *m;
}

int main()
{
    int mas[10] = {1, 1, 2, 3, 4, 4, 4, 5, 6, 7};
    int count;
    int *a;
    a = unique_copy(mas, 10, &count);
    printf("%d", a[1]);
}