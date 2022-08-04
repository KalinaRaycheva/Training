#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

void fillArray(int arr[], int arr_count){
    for(int i = 0; i < arr_count; i++){
		printf("Enter %d number- ", i+1);
		scanf("%d", &arr[i]);
    }
}

int arrSum(int arr[], int arr_count){
    int arr_sum = 0;
	for(int i = 0; i < arr_count; i++){
		arr_sum += arr[i];
	}	
    return arr_sum;
}

int minInArr(int arr[], int arr_count){
    int min_arr = arr[0];
	for(int i = 1; i < arr_count; i++){
		if(arr[i] < min_arr)
			min_arr = arr[i];
	}
    return min_arr;
}

int maxInArr(int arr[], int arr_count){
	int max_arr = arr[0]; 
	for(int i = 1; i < arr_count; i++){
		if(arr[i] > max_arr)
			max_arr = arr[i];
	}
    return max_arr;
}
