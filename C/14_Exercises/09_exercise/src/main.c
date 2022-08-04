/*
9. Една крайна редица от цели числа се нарича зигзаг, ако всеки елемент на редицата (без
първия и последния) е или по-голям от двата му съседа или по-малък от двата съседни
елемента. Да се напише функция, която по зададен масив от цели числа, определя дали
редицата, образувана от тези числа е зигзаг.
Вход. На стандартния вход се задават числови редици – всяка на отделен ред с разделител
един интервал между числата.
Ограничения. Всички числа се представят в типа int
Изход. За всяка редица се извежда на отделен ред yes за зигзаг и no – за редица, която не е
зигзаг
*/
#include "..\include\fnc.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
int main(){
    int count_nums;
    printf("Enter count of number you want to test: ");
    scanf("%d",&count_nums);
    int *arr = createArray(count_nums);
    if(isZigZag(arr,count_nums)){
        printf("The arr is zig zag !!!");
    }else{
        printf("The arr is not zig zag !!!");
    }
    free(arr);
    return 0;
}
