#include "..\include\fnc.h"
#include<stdio.h>
#include<stdlib.h>

void fillArr(int *arr, int n){
    int num = 0;
	for(int i = 0; i < n; i++){
		printf("Enter %d number- ", i+1);
		scanf("%d", &num);
		*(arr+i) = num;
	}
}
 
double *countInprc(int *arr , int n){
    int countOfZero = 0;
    int countOfPositive = 0;
    int countOfNegative = 0;
    
    for(int i = 0 ; i < n ;i++){
        if(*(arr+i)==0){
            countOfZero++;
        }else if(*(arr+i)>0){
            countOfPositive++;
        }else{
            countOfNegative++;
        }
    }

    double countOfZeroPercent = countOfPositive/(double)n;
    double countOfPositivePercent = countOfNegative/(double)n;
    double countOfNegativePercent =  countOfZero/(double)n;

    printf("There are n = %d elements, %d positive, %d negative and %d zero.Their ratios are %d/%d = %lf, %d/%d = %lf and %d/%d = %lf."
           "Results are printed as:\n", n, countOfPositive, countOfNegative, countOfZero, countOfPositive, n, countOfZeroPercent,
            countOfNegative, n, countOfPositivePercent, countOfZero, n, countOfNegativePercent);
            
    double *result = (double*)malloc(sizeof(double)*3);
    *result = countOfZeroPercent;
    *(result+1) = countOfPositivePercent;
    *(result+2) = countOfNegativePercent;

	return result;
    free(result);
}

void printPoint(double *arr, int n){
	for(int i = 0; i < n; i++){
		printf("%lf\n", arr[i]);
	}
}