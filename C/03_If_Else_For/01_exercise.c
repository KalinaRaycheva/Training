#include <stdio.h>

int main(){
    
    float A, B;
    printf("Enter sume - ", A);
    scanf("%f", &A);
    printf("Enter interest in percents - ", B);
    scanf("%f", &B);

    //Condition a
    float result = A;
    for(int i = 1; i <= 5 * 12; i++)
        result += result * (B/100);

    printf("You will have %0.2f after 5 years.\n", result);

    //Condition b
    int N;
    printf("Enter for how many years do you want to calculate? - ");
    scanf("%d", &N);

    result = A;
    for(int i = 1; i <= N * 12; i++)
        result += result * (B/100);

    printf("You will have %0.2f after %d years.\n", result, N);

    //Condition c
    int C;
    printf("Enter the sume you want to exceed? - ");
    scanf("%d", &C);

    result = A;
    int months = 0;
    while (result <= C){
        result += result * (B/100);
        months += 1;
    }

    printf("You will have %0.2f after %d months.", result, months);

    return 0;
}