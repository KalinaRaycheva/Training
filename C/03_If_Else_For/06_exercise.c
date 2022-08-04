#include <stdio.h>

int main(){

    int first = 0, difference = 0, N = 0;
    printf("Enter first num - ");
    scanf("%d", &first);
    printf("Enter the difference you want - ");
    scanf("%d", &difference);
    printf("Enter count of numbers you want to display - ");
    scanf("%d", &N);
    
    int current = first;
    printf("%d, ", current);
    while(N > 1){
        current += difference;
        printf("%d, ", current);
        N--;
    }

    return 0;
}