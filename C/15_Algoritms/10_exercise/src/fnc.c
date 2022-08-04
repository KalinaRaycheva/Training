#include "..\include\fnc.h"

void transpose(int matrix[R][C], int transposed[R][C], int rows, int cols) 
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			transposed[j][i] = matrix[i][j];
        }
    }
}