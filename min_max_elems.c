#include<stdio.h>

int min_max_elems(int a[], int siz, int *min, int *max)
{
    int i;
    *min = 2147483647;
    *max = -2147483647;
    for(i = 0; i < siz; i++){
        if(a[i] < *min){
            *min = a[i];
        }
        if(a[i] > *max){
            *max = a[i];
        }
    }
    return 0;
}

int main(){
    int size, i;
    int min, max;
    printf("Введите размер массива: ");
    scanf("%d", &size);
    int mas[size];
    printf("Теперь заполните массив числами\n");
    for(i = 0; i < size; i++){
        printf("mas[%d] = ", i);
        scanf("%d", &mas[i]);
    }
    min_max_elems(mas, size, &min, &max);
    printf("Значение наибольшего элемента = %d\n", max);
    printf("Значение наименьшего элемента = %d\n", min);
}