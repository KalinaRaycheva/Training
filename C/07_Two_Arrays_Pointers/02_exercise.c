/*
Задача 4* Дом. Напишете програма, която проверява дали дадена матрица е
identity matrix - матрица с размер (N x N), където само елементите в главния
диагонал са единици, а всички останали елементи са нули.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int n = 0;
    printf("Enter rows of matrix - ");
    scanf("%d", &n);

    int matrix [n][n];
    
    for (int row = 0; row < 4; row++){
        for (int col = 0; col < 4; col++){
            matrix [row][col] = rand() % 10;
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    
    bool cheker = true;
    for (int row = 0; row < 4; row++){
        for (int col = 0; col < 4; col++){
            if(row == col && matrix [row][col] != 1)
                cheker = false;
            if(row != col && matrix [row][col] != 0)
                cheker = false;
        }
    }

    if(cheker)
        printf("The matrix is identity.");
    else
        printf("The matrix isn't identity.");            

    return 0;
}