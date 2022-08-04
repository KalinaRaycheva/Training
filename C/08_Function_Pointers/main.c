/*
...................................................................................
other sort:
https://visualgo.net/en/sorting?slide=1
search sorts in geeks for geeks. Example:
https://www.geeksforgeeks.org/merge-sort/

....................................................................................
#include <stdio.h>

int binarySearch(int *array, int x, int low, int high);

int main(){
    
    int array[] = {3, 4, 5, 6, 17, 38, 90};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 4;

    int result = binarySearch(array, x, 0, n - 1);

    if(result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result);

    return 0;
}


int binarySearch(int *array, int x, int low, int high){
    while (low <= high){
        int mid = low + (high - low) / 2;
        
        if (array[mid] == x)
            return mid;
        if(array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
...............................................................................
//pointer to funk
#include <stdio.h>

void tabul(float (*f)(float), float x[], float y[], int count, float step);
float f1(float x);
float f2(float x);

int main(){

    float x[5], y[5];
    tabul(f1, x, y, 5, 2);
    for(int i = 0; i < 5; i++){
        printf("x[%d] = %f\t y[%d] = %f\n", i, x[i], i, y[i]);
    }

    return 0;
}


void tabul(float (*f)(float), float x[], float y[], int count, float step){
    for(int i = 0; i < count; i++){
        x[i] = i * step;
        y[i] = (*f)(x[i]);
    }
}

float f1(float x){
    return x * x + 2;
}

float f2(float x){
    return x * x - 1;
}

...............................................................................
//exercise with pointer to func
#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB);
int fnMinus(int nA, int nB);

int main(){

    int firstNum, secondNum, sign;
    printf("Enter first num - "); scanf("%d", &firstNum);
    printf("Enter second num - "); scanf("%d", &secondNum);
    printf("Enter 1 for '+' and 2 for '-' - "); scanf("%d", &sign);

    switch(sign){
        case 1:
            printf("%d", (*fnPlus)(firstNum, secondNum));
            break;
        case 2:
            printf("%d", (*fnPlus)(firstNum, secondNum));
            break;
        
    }


    return 0;
}

int fnPlus(int nA, int nB){
    return (nA + nB);
}

int fnMinus(int nA, int nB){
    return (nA - nB);
}
................................................................................
Merge Sort
#include <stdio.h>
#include <stdlib.h>
  
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    //create temp arrays
    int L[n1], R[n2];
  
    //Copy data to temp arrays L[] and R[] 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    //Merge the temp arrays back into arr[l..r]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  
    //Copy the remaining elements of L[], if there are any 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
// l is for left index and r is right index of the sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;
  
        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}
  
//UTILITY FUNCTIONS
//Function to print an array
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
  
//Driver code 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    printf("Given array is \n");
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
.................................................................................
//insertion sort
#include <stdio.h>
#include <stdlib.h>


void readArray(int *a, int n);
void printArray(int *a, int n);
void insertionSort(int *a, int n);

int main(){

    int N = 10;
    int *array;
    array = (int *) malloc(sizeof (int) * N);

    readArray(array, N);
    printArray(array, N);
    insertionSort(array, N);
    printf("\n");
    printArray(array, N);

    return 0;
}

void readArray(int *a, int n){
    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
    }
}

void printArray(int *a, int n){
   for(int i = 0; i < n; i++){
        printf("%d\t", *(a + i));
    }
}

void insertionSort(int *a, int n){
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
..................................................................................
//selection sort
#include <stdio.h>
#include <stdlib.h>


void readArray(int *a, int n);
void printArray(int *a, int n);
void selectionSort(int *a, int n);

int main(){

    int N = 10;
    int *array;
    array = (int *) malloc(sizeof (int) * N);

    readArray(array, N);
    printArray(array, N);
    selectionSort(array, N);
    printf("\n");
    printArray(array, N);

    return 0;
}

void readArray(int *a, int n){
    for(int i = 0; i < n; i++){
        scanf("%d", a + i);
    }
}

void printArray(int *a, int n){
   for(int i = 0; i < n; i++){
        printf("%d\t", *(a + i));
    }
}

void selectionSort(int *a, int n){
    int min;
    for(int j = 0; j < n - 1; j++){
        min = j;
        for(int k = j + 1; k < n; k++){
            if(a[min] > a[k]){
                min = k;
            }
        }
        int temp = a[min];
        a[min] = a[j];;
        a[j] = temp;
    }
}

/*almost work \for debuging
void selectionSort(int *a, int n){
    int *min = a;
    for(int j = 0; j < n; j++){
        for(int k = j + 1; k < n; k++){
            if(*min > *(a + k)){
                min = a + k;
            }
        }
        int temp = *(a + j);
        *(a + j) = *min;
        *min = temp;
    }
}
*/

/*...................................................................................
#include <stdio.h>
#include <stdlib.h>


void readArray(int **arr, int N, int M);
void printArray(int **arr, int N, int M);
void swapFandS(int **arr, int N, int M);

int main(){

    int N = 3, M = 4;
    int **arr;
    arr = (int **) malloc(sizeof (int*) * N);

    for(int i = 0; i < N; i++){
        arr [i] = (int*) malloc(sizeof (int) * M);
    }

    readArray(arr, N, M);
    printArray(arr, N, M);
    swapFandS(arr, N, M);
    printf("\n");
    printArray(arr, N, M);


    return 0;
}

void readArray(int **arr, int N, int M){
    for(int k = 0; k < N; k++){
        for(int l = 0; l < M; l++){
            scanf("%d", &arr[k][l]);
        }
    }
}

void printArray(int **arr, int N, int M){
    for(int k = 0; k < N; k++){
        for(int l = 0; l < M; l++){
            printf("%d\t", arr[k][l]);
        }
        printf("\n");
    }
}

void swapFandS(int **arr, int N, int M){
    for(int k = 0; k < N; k++){
        for(int l = 0; l < 1; l++){
            int temp = arr[k][l];
            arr[k][l] = arr[k][l+1];
            arr[k][l+1] = temp;
        }
    }
}



...................................................................................
//tries
#include <stdio.h>

int main(){
    int x = 5;
    int *p = &x;
    *p  = 6;
    int **q = &p;
    int ***r = &q;

    printf("p is %p\n", p);
    printf("*p is %p\n", *p);
    printf("q is %p\n", q);
    printf("*q is %p\n", *q);
    printf("**q is %p\n", **q);
    printf("r is %p\n", r);
    printf("*r is %p\n", *r);
    printf("**r is %p\n", **r);
    printf("***r is %p\n", ***r);

    return 0;
}
...................................................................................
*/
