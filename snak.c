#include<stdio.h>
#include<stdio_ext.h>
#include<ctype.h>

int main()
{
    int raws = -1, cols = -1;
    int i, j, count;

    printf("Введите количество строк: ");
    while((!scanf("%d", &raws)) || (raws < 1)){
        __fpurge(stdin);
        printf("Количеством строк может быть только целое положительное число!\n");
        printf("Введите количество строк: ");
    }
    printf("Введите количество стобцов: ");
    while((!scanf("%d", &cols)) || (cols < 1)){
        __fpurge(stdin);
        printf("Количеством стобцов может быть только целое положительное число!\n");
        printf("Введите количество стобцов: ");
    }
    
    int snake[raws][cols];

    count = 0;
    for(i = 0; i < raws; i += 2){
        for(j = 0; j < cols; j++){
            snake[i][j] = count;
            count++;
        }
        count = count + cols;
    }
    if(raws % 2 != 0){
        count = (raws * cols - 1) - cols;
        for(i = raws - 2; i > 0; i -= 2){
            for(j = 0; j < cols; j++){
                snake[i][j] = count;
                count--;
            }
            count = count - cols;
          }
    }
    if(raws % 2 == 0){
        count = raws * cols - 1;
        for(i = raws - 1; i > 0; i -= 2){
            for(j = 0; j < cols; j++){
                snake[i][j] = count;
                count--;
            }
            count = count - cols;
        }
    }
    for(i = 0; i < raws; i++){
        for(j = 0; j < cols; j++){
            printf("%4d ", snake[i][j]);
        }
        printf("\n");
    }
}