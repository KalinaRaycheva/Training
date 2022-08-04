/*
2. Напишете програма, която запълва масив от 20 елемента с произволно избрани
цели числа. За целта използвайте функцията rand().
Въведете едно цяло число от клавиатурата. Проверете дали въведеното число
от клавиатурата е намерено в масива. Принтирайте масива и отговора дали
числото е намерено в масива. 
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

void printArray(int *arr);
void search(int *arr, int number);

int main()
{
    int array[SIZE] = {0};
    int number = 0;

    for (int i = 0; i < SIZE; i++)
        array[i] = rand() % 10;

    printf("Enter a number between 0 and 10: ");
    scanf("%d", &number);

    printArray(array);
    search(array, number);
    return 0;
}

void printArray(int *arr)
{
    for (int i = 0; i < SIZE; i++)
        printf("[%d] = %d, ", i, arr[i]);
    
    printf("\n");
}

void search(int *arr, int number)
{
    for (int i = 0; i < SIZE; i++)
        if(arr[i] == number)
            printf("%d is in %dth element!\n", number, i + 1);
}