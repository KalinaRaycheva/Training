#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>


int **create2SpiralArray(int **arr, int enrow, int encol)
{
	int num = 1;
	int i, rowind = 0, colind = 0;
	while (rowind < enrow && colind < encol)
	{
		for (i = colind; i < encol; ++i)
		{
			arr[rowind][i] = num++;
		}
		rowind++;
		for (i = rowind; i < enrow; ++i)
		{
			arr[i][encol - 1] = num++;
		}
		encol--;
		if (rowind < enrow)
		{
			for (i = encol - 1; i >= colind; --i)
			{
				arr[enrow - 1][i] = num++;
			}
			enrow--;
		}
		if (colind < encol)
		{
			for (i = enrow - 1; i >= rowind; --i)
			{
				arr[i][colind] = num++;
			}
			colind++;
		}
	}
	return arr;
}

void print2dArray(int **arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
