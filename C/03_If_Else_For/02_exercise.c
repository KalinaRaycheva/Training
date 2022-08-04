#include <stdio.h>

int main(){

    float A, B;
    printf("Enter kilometers from the first day - ", A);
    scanf("%f", &A);
    printf("Enter interest in percents - ", B);
    scanf("%f", &B);

    //Condition a
    float result = A;
    for(int i = 1; i <= 10; i++)
        result += result * (B/100);

    printf("You will run %0.3f kilometers after 10 days.\n", result);

    //Condition b
    int N;
    printf("Enter days diapason - ");
    scanf("%d", &N);
    result = A;
    for(int i = 1; i <= N; i++)
        result += result * (B/100);

    printf("You will run %0.3f kilometers after %d days.\n", result, N);

    //Condition c
    float X;
    printf("Enter the kilometers you want to exceed? - ");
    scanf("%f", &X);
    result = A;
    int day = 1;
    while(result * (B/100) <= X){
        result += result * (B/100);
        day += 1;
    }

    printf("You will run %0.3f kilometers on the %d day.\n", result, day);

    //Condition d
    float Y;
    printf("Enter the kilometers you want to exceed? - ");
    scanf("%f", &Y);
    result = A;
    int days = 1;
    while(result <= Y){
        result += result * (B/100);
        days += 1;
    }

    printf("You will run %0.3f kilometers for %d days.\n", result, days);

    return 0;
}