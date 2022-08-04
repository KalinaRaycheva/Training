/*
Задача 4. Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
където А е обикновен масив от цели числа,
n - размера на масива,
dir - посоката, в която да бъде сортиран масива,
ftype - указател към функция, която приема масив, неговия размер и в каква посока да бъде
сортиран входния масив.
ftype трябва да сортира масива във възходящ или низходящ ред в зависимост от третия
параметър на функцията.
Принтирайте изходния и резултатни масиви.
*/
 
#include<stdio.h>
#include<stdlib.h>

void sortMinToMax(int *a,int n);
void sortMaxToMin(int *a , int n);
void sort_arr(int *a, int n, int dir, void (*fptr)(int * , int));
void readArray(int *a , int n);
void printArray(int *a , int n);
void (*fptr)(int * , int) = NULL;
 
int main(){
    int n, dir;
    printf("Enter n:"); scanf("%d",&n);
    int *a = (int*)malloc(sizeof(int) * n);
    readArray(a, n);
    printf("Enter dir : "); scanf("%d",&dir);
    sort_arr(a, n, dir, fptr);
    printArray(a, n); 
    return 0;
}

void sortMinToMax(int *a,int n){
    for(int i = 0 ; i < n; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(*(a + i) > *(a + j)){
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
 
}
 
void sortMaxToMin(int *a , int n){
      for(int i = 0 ; i < n; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(*(a + i) < *(a + j)){
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
 
}
 
void sort_arr(int *a, int n, int dir, void (*fptr)(int * , int)){
    if(dir < 0){
        fptr = sortMinToMax;
 
    }else{
        fptr = sortMaxToMin;
    }
    (*fptr)(a,n);
 
 
}
 
void readArray(int *a , int n){
    for(int i = 0; i  < n ; i++){
        printf("Enter a[%d] = ", i); scanf("%d", a + i);
    }
}
 
void printArray(int *a , int n){
    for(int i = 0; i < n ;i++){
        printf("%d \t", *(a + i));
    }
}
 