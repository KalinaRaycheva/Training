/*
4. Напишете функция, която по зададено n връща двумерен масив n x n,
елементите на който са подредени като спирала:
Например, при n=5
*/
#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d", &n);
	int **arr = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * n);
	}

	arr = create2SpiralArray(arr, n, n);
	print2dArray(arr, n);
}