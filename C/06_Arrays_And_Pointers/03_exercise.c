/*
3. Напишете програма, която принтира уникалните елементи от масив с цели числа,
въведени от клавиатурата. За целта, някои от числата трябва да се повтарят.
*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE 8

void printArray(int *arr);
void fillArray(int *arr);
bool isUnique(int *arr, int num, int *numAddress);

int main()
{
    int array[SIZE] = {0};
    fillArray(array);

    printf("Unique numbers are: \n");
    for (int i = 0; i < SIZE; i++)
        if(isUnique(array, array[i], &array[i]))
            printf("[%d] = %d\n", i, array[i]);

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

bool isUnique(int *arr, int num, int *numAddress)
{
    for (int i = 0; i < SIZE; i++)
    {
        if(numAddress == &arr[i])
            continue;

        if(num == arr[i])
            return false;
    }
    return true;
}

void printArray(int *arr)
{
    for (int i = 0; i < SIZE; i++)
        printf("[%d] = %d, ", i, arr[i]);
    
    printf("\n");
}