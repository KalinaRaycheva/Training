/*
Задача 8. Напишете собствен тип за структура node, съдържаща
един член от тип int и един указател към тип самата структура. Заделете
динамично памет за масив от 10 елемента от тази структура с malloc. За
всеки елемент от масива попълнете цялото число с неговия пореден номер.
Принтирайте резултатите.
*/

#include <stdio.h>

typedef struct node node;

struct node{
    int num;
    node *next;
};

int main(){
    node *ss = (node*)malloc(10*sizeof(node));
    for(int i = 0; i < 10; i++){
        ss[i].num = i + 1;
        if(i==9){
            ss[i].next = NULL;
        }else{
            ss[i].next = (node*)&ss[i+1];
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d %d\n", ss[i].num, ss[i].next);
    }
    return 0;
}