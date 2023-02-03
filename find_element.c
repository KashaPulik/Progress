#include<stdio.h>

int* find_element(int *begin, int *end, int value)
{
    while(begin < end){
        if(*begin == value){
            break;
        }
        begin++;
    }
    if(begin == end){
        begin = NULL;
    }
    return begin;
}

int main(void){
    int i, size, value, *elem;

    printf("Введите размер массива: ");
    scanf("%d", &size);
    int array[size];
    printf("Введите элементы массива:\n");
    for(i = 0; i < size; i++){
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Введите значение элемента, которое нужно найти: ");
    scanf("%d", &value);
    
    elem = find_element(array, array + size, value);
    if(elem == NULL){
        printf("Такой элемент не найден :(\n");
    }else{
        *elem = 0 - *elem;
    }
    printf("Результат:\n");
    for(i = 0; i < size; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
}