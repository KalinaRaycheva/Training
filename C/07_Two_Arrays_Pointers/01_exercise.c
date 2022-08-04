/*
Задача 2. Дом Напишете програма, която събира две матрици (4х4) и записва
резултата в трета такава със същия размер. Събирането на матриците става като
намерим сумата на съответстващите елементи в тях. Данните за изходните матрици
трябва да бъдат въведени от потребителя. Разпечатайте трите матрици в конзолата.
*/

#include <stdio.h>

int main(){
    int first [4][4] = {0};
    int second [4][4] = {0};
    int thirth [4][4] = {0};

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("Enter number number for first matrix- ");
            scanf("%d", &first[i][j]);
            printf("Enter number number for second matrix- ");
            scanf("%d", &second[i][j]);

            thirth[i][j] = first[i][j] + second[i][j];
        }
    }

    printf("\nFirst:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            printf("[%d] ", first[i][j]);
        printf("\n");
    }

    printf("\nSecond:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            printf("[%d] ", second[i][j]);
        printf("\n");
    }

    printf("\nThirth:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++)
            printf("[%d] ", thirth[i][j]);
        printf("\n");
    }

    return 0;
}
