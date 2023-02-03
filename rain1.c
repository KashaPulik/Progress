#include<stdio.h>

enum{
    mas = 10
};

int main()
{
    int mount[mas], pic[mas] = {0};
    int i, j, min, left, right, k, count = 0;

    printf("Нарисуйте рельеф\n");
    for(i = 0; i < mas; i++){
        printf("Введите высоту %d выступа: ", i + 1);
        scanf("%d", &mount[i]);
    }
    if(mount[0] > mount[1]){
        pic[0] = 1;
    }
    for(i = 1; i < mas - 1; i++){
        if( ( (mount[i] > mount[i - 1]) & (mount[i] > mount[i + 1]) ) || ( (mount[i] == mount[i - 1]) & (mount[i] > mount[i + 1]) ) || ( (mount[i] > mount[i - 1]) & (mount[i] == mount[i + 1]) ) ){
            pic[i] = 1;
        }
    }
    if(mount[i] > mount[i - 1]){
        pic[i] = 1;
    }
    for(i = 0; i < mas; i++){
        if(pic[i] == 1){
            left = mount[i];
            j = i;
            while(pic[j] == 1){
                j++;
            }
            i = j;
            while(pic[j] != 1){
                if(pic[j] == 0){
                    j++;
                }else{
                    break;
                }
            }
            if(pic[j] == 1){
                right = mount[j];
            }else{
                break;
            }
        }
        if(pic[i - 1] == 1){
            if(left > right){
                min = right;
            }else{
                min = left;
            }
            for(k = i; k < j; k++){
                count += min - mount[k];
            }
            if(pic[j] == 1){
            }
        }
    }
    if(count > 0){
        printf("Прошёл дождь, и в углублениях набралось %d воды.\n", count);
    }else{
        printf("Прошёл дождь, но так как углублений нет, вода никуда не набралась\n");
    }
}