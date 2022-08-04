/*
14. Напишете програма, която при дадена редица изтрива всички числа, които
се срещат нечетен брой пъти. За целта използвайте функция.
Пример:
array = {4, 2, 2, 5, 2, 3, 2, 3, 1, 5, 2}
 {5, 3, 3, 5}
*/
#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int *deleteNumber(int *array, int size, int counter, int number);

int main()
{
	int *array = (int*)calloc(SIZE, sizeof(int));
	
	printf("Enter %d numbers: ", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &array[i]);
	}

	int counter = 0;
	int size = SIZE;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (array[i] == array[j])
			{
				counter++;
			}
		}

		if (counter % 2 != 0)
		{
			int *temp = array;
			array = deleteNumber(array, size, counter, array[i]);
			free(temp);
			size -= counter;
		}
		counter = 0;
	}

	for (int i = 0; i < size; i++){
		printf(" %d", array[i]);
	}

	return (0);
}

int *deleteNumber(int *array, int size, int counter, int number){
	int *temp = (int*)calloc(size-counter, sizeof(int));
	int k = 0;
	for (int i = 0; counter != 0; i++)
	{
		if(array[i] != number){
			temp[k++] = number;
			counter--;
		}
	}
	return temp;
}