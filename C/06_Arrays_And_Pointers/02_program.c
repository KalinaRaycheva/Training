/*
#include <stdio.h>

int multi(int arr[], int i){
    int result = 0;
    for(int k = 0; k < 3; k++){
        result +=result * k;
    }
    i = result;
    printf("%d\n", i)

}

int main(){
    int i = 5;
    int arr[3] = {1,2,3};
    multi(arr, &i);
}

\*