/*
4. Напишете програма, която да брои колко пъти се среща едно число в даден масив
от цели числа. Масивът трябва да бъде въведен от клавиатурата. Принтирайте
резултатите.
*/

#include <stdio.h>
#define SIZE 10

void fillArray(int *arr);
void printArray(int *arr);
void countNum(int *arr);

int main()
{
    int array[SIZE] = {0};
    fillArray(array);
    printArray(array);
    countNum(array);

    return 0;
}

void fillArray(int *arr)
{
    printf("Enter %d nums: ", SIZE);
    scanf("%d", arr);

    for (int i = 1; i < SIZE; i++)
        scanf(" %d", &arr[i]);  
}

void printArray(int *arr)
{
    for (int i = 0; i < SIZE; i++)
        printf("[%d]=%d\t", i, arr[i]);
    
    printf("\n");
}

void countNum(int *arr)
{
    int arr2[SIZE] = {0};
    for(int i = 0; i < SIZE; i++)
        arr2[i] = arr[i];

    int counter, past = 0;
    for (int i = 0; i < SIZE; i++) {  
        past = i   
        for (int j = 0; j < SIZE; j++) {  
           if(arr[i] == arr2[j]) {     
               counter ++;  
           }
        }
        printf("%d = %d times.\n", arr[i], counter);
        counter = 0;
    }    
}

