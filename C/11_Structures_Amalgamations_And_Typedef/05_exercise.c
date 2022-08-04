/*
Задача 7.Напишете масив от структури наречен key_tab[ ], като използвате тази,
дефинирана в горното упражнение - потребителски тип key_t, която
съдържа символен низ и число. Инициализирайте масива с всички
ключови думи на С, като заделяте паметта за всяка ключова дума
динамично. Принтирайте масива.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char s[15];
    int num;
}key_t;

int main(){
    key_t *key_tab = (key_t*)malloc(32*sizeof(key_t));
    char keyWords[][10] ={"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    for(int i = 0; i < 32; i++){
        strcpy(key_tab[i].s, keyWords[i]);
        key_tab[i].num = i+1;
    }

    for(int i = 0; i < 32; i++){
        printf("%s %d \n", key_tab[i].s, key_tab[i].num);
    }

    return 0;
}