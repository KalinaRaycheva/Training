/*
1. Прочетете масив от цели числа от клавиатурата.
Копирайте въведения масив във втори масив, като умножите стойността на
всеки елемент по 2. Принтирайте двата масива.
*/

#include <stdio.h>
#define SIZE 5

void printArray(int *arr);
void fillArray(int *arr);

int main()
{
    int firstArray[SIZE] = {0};
    int secondArray[SIZE] = {0};

    fillArray(firstArray);
    printf("First array:\n");
    printArray(firstArray);

    for (int i = 0; i < SIZE; i++)
        secondArray[i] = firstArray[i] * 2;
    
    printf("Second array:\n");
    printArray(secondArray);
    
    return 0;
}

void fillArray(int *arr)
{
    printf("Enter %d nums: ", SIZE);
    scanf("%d", arr);
    for (int i = 1; i < SIZE; i++)
    {
        scanf(" %d", &arr[i]);
    }    
}

void printArray(int *arr)
{
    for (int i = 1; i <= SIZE; i++)
        printf("[%d] = %d\n", i, arr[i]);
    
    printf("\n");
}