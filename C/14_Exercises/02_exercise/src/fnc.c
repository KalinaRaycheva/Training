#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

void isPrime(){
    int number = 0;
    printf("Enter the number you want to check- "); scanf("%d", &number);
    for (int i = 2; i*i <= number; i++)
    {
        if(number % i == 0)
        {
            printf("%d isn't prime.\n", number);
            return;
        }
    }
    printf("%d is prime.\n", number);
}

int GCDTwoNums(int number1, int number2){
    int gcd;
    for(int i=1; i <= number1 && i <= number2; ++i)
    {
        if(number1 % i == 0 && number2 % i == 0)
            gcd = i;
    }
    return gcd;
}

void fillArr(int *arr, int size){
    for(int i = 0; i < size; i++){
    	printf("%d number - ", i); 
		scanf("%d",&arr[i]);
	}
}

int GCDArray(int *arr , int size){
    int result = arr[0];
    for (int i = 1; i < size; i++){
        result = GCDTwoNums(arr[i], result);
        if(result == 1){
           return 1;
        }
    }
    return result;
}