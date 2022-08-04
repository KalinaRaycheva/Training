/*
Задача 6*. Дом Напишете програма, която печата броя на уникалните редове в бинарна
матрица, съставена само от единици и нули.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int N = 0;
    printf("Enter the size of the matrix: ");
    scanf("%d", &N);
    int *arr = (int*)malloc(N * N * sizeof(int));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
//            *(arr + N * i + j) = rand() % 2;
            scanf("%d", (arr + N * i + j));


    printf("Matrix: \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++)
            printf("%d ", *(arr + i * N + j));
        printf("\n");
    }

    printf("Unique rows: \n");
    int counter = 0;
    bool isUnique = true;
    for (int i = 0; i < N; i++){   
        isUnique = true;     
        for (int j = 0; j < N; j++){
            if(j == i)
                continue;

            counter = 0;
            for (int k = 0; k < N; k++)
                if(*(arr + i * N + k) == *(arr + j * N + k))
                    counter++;

            if(counter == N){
                isUnique = false;
                break;
            }
        }

        if(isUnique == true){
            for (int l = 0; l < N; l++)
                printf("%d ", *(arr + i * N + l));
            printf("\n");
        }
    }

    return 0;
}