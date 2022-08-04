//Type sorts:

/*
//Bubble sort
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
..................................................................................
//Selection sort
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

...................................................................................
//Insertion sort
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
................................................................................
//Merge Sort
#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r); 
void printArray(int A[], int size);

  
int main(){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
  
    printf("Given array is \n");
    printArray(arr, arr_size);
  
    mergeSort(arr, 0, arr_size - 1);
  
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    i = 0;
    j = 0;
    k = l;
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
  
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  
void mergeSort(int arr[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
  
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}
  
void printArray(int A[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
.................................................................................
// Quick sort in C

#include <stdio.h>

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
*/