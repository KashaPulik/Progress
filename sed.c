#include<stdio.h>

int main()
{   
    int n, m;
    printf("Введите количество строк в массиве: ");
    scanf("%d", &n);
    printf("Введите количество столбцов в массиве: ");
    scanf("%d", &m);
    int mas[n][m];
    int min[n], max[m];
    int i, j, f;

    printf("Теперь необходимо заполнить массив значениями\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("(%d, %d) = ", i, j);
            scanf("%d", &mas[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%4d", mas[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < n; i++){
        min[i] = 1000000;
    }
    for(j = 0; j < m; j++){
        max[j] = 0;
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(mas[i][j] < min[i]){
                min[i] = mas[i][j];
            }           
        }
    }
    for(j = 0; j < m; j++){
        for(i = 0; i < n; i++){
            if(mas[i][j] > max[j]){
                max[j] = mas[i][j];
            }
        }
    }

    f = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(min[i] == max[j]){
                f = printf("(%d, %d) = %d\n", i, j, min[i]);
            }
        }
    }
    if(f == 0){
        printf("В получившейся таблице нет седловых точек\n");
    }
}