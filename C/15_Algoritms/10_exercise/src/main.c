/*
20. Да се напише функция, която зависи от един двумерен масив и
броят на неговите редове и колони и транспонира този масив, като
транспонираният масив се връща кото стойност на функцията.
Действието транспониране на една матрица, означава първият ред да
стане първи стълбр вторият ред да стане втори стълб и т.н.
Или казано с други думи редовете стават колони, а колоните стават
редове. 
*/
#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matrix[R][C];
    int transposed_matrix[R][C];

    int rows;
    int cols;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &rows, &cols);

	printf("Enter matrix P\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("[%d,%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
    }

	transpose(matrix, transposed_matrix, rows, cols);
	printf("Transpose of the matrix is:\n\n");

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			printf("%d ", transposed_matrix[i][j]);
        }
		printf("\n");
	}
}