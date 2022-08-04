#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

void makeMatrix(int matrix[SIZE][SIZE]){
    int lower_counter = 1;
	int upper_counter = 20;
 
    for (int row = 0; row < SIZE; ++row){
        for (int column = 0; column < SIZE; ++column) {
            if (row < column) {
                matrix[column][row] = lower_counter;
                lower_counter++;
            }else if (row == column) {
                matrix[row][column] = 0;
            }else if (row > column){
                matrix[column][row] = upper_counter;
                upper_counter--;
            }
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE]){
    for (int row = 0; row < SIZE; ++row){
        for (int column = 0; column < SIZE; ++column) {
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }
}