#include<stdio.h>

enum{
    mas = 10
};

int main()
{
    int mount[mas], pic[mas] = {0};
    int i, j, max, left, right, k, count;

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
    if( (mount[i] > mount[i - 1]) || (mount[i] == mount[i - 1]) ){
        pic[i] = 1;
    }
    for(i = 0; i < mas; i++){
        if(pic[i] == 1){
            left = mount[i];
            j = i;
            max = 0;
            min = 10000;
            while(pic[j + 1] == 0){
                j++;
            }
            j++;
            right = mount[j];
        }
        if(right > left){
            max = right;
        }else{
            max = left;
        }
        if(pic[i] == 1){
            for(k = i + 1; k < j; k++){
                count = count + (max - mount[k]);
            }
        }
    }
    printf("%d\n", count);
}