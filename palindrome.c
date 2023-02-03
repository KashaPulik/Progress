#include<stdio.h>
#include<string.h>
#include<ctype.h>

enum{
    stringsize = 50
};

int main()
{
    char phrase[stringsize];
    int i, j = 0, size = 0, simvol;
    printf("Введите предложение, которое требуется проверить: \n");
    fgets(phrase, stringsize - 1, stdin);

    for(i = 0; i < strlen(phrase) - 1; i++){
        simvol = phrase[i];
        if( ((simvol > 64)&(simvol < 91)) || ((simvol > 96)&(simvol < 123)) ){
            size++;
        }
    }
    char letters[size];
    for(i = 0; i < strlen(phrase) - 1; i++){
        simvol = phrase[i];
        if( ((simvol > 64)&(simvol < 91)) || ((simvol > 96)&(simvol < 123)) ){
            letters[j] = phrase[i];
            j++;
        }
    }
    for(i = 0; i < sizeof(letters); i++){
        letters[i] = tolower(letters[i]);
    }
    for(i = 0; i < sizeof(letters); i++){
        j = sizeof(letters) - 1 - i;
        if( (i == j)||(i > j)){
            letters[i] = 'o';
            break;
        }
        if(letters[i] == letters[j]){
            letters[i] = 'o';
            letters[j] = 'o';
        }
    }
    for(i = 0; i < sizeof(letters); i++){
        if(!(letters[i] == 'o')){
            printf("Эта фраза не палиндром.\n");
            j = 0;
            break;
        }else{
            j = 1;
        }
    }
    if(j == 1){
        printf("Эта фраза палиндром.\n");
    }
}