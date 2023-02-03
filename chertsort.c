#include <stdio.h>

enum{
    massize = 10
};

int main()
{
    int a[massize];
    int i, j, max = 0, z = 0, perexod;

    for(i = 0; i < massize; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if(a[i] > max){
            max = a[i];
        }
    }
    int class[max + 1];
    for(i = 0; i < max + 1; i++){
        class[i] = 0;
    }

    for(i = 0; i < massize; i++){
        perexod = a[i];
        class[perexod]++;
    }

    for(i = 0; i < max + 1; i++){
        for(j = z; j < massize;j++){
            perexod = j;
            while(class[i] > 0){
                a[perexod] = i;
                perexod++;
                z++;
                class[i]--;
            }
        }
    }
    for(i = 0; i < massize - 1; i++){
        printf("a[%d] = %d, ", i, a[i]);
    }
    printf("a[%d] = %d\n",massize - 1, a[massize - 1]);
}