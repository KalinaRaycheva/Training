#include <stdio.h>

int main() {
    int ounces, glasses;

    printf("How many ounces do you want? -> ");
    scanf("%d", &ounces);
    
    while (ounces != 0){
        if (ounces < 8){
            glasses += 1;
            break;
        }
        glasses +=1;
        ounces -= 8;
    }

    printf("You ordered %d glasses.", glasses);
    return 0;
}