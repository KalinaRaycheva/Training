#include "..\include\fnc.h"
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int * createArray(int count_nums){
    int *arr =(int*)malloc(count_nums * sizeof(int));
    for(int i = 0 ; i < count_nums ; i++){
        printf("Enter number : ");
        scanf("%d",arr+i);
    }
    return arr;
}
 
bool isZigZag(int * arr , int count_nums){
    for(int i = 1; i < count_nums-1;i++){
        if(!((*(arr+i)<*(arr+i+1) && *(arr+i) < *(arr+i-1)) ||
            (*(arr+i)>*(arr+i+1) && *(arr+i) > *(arr+i-1))) ){
                return false;
            }
    }
    return true;
}
 