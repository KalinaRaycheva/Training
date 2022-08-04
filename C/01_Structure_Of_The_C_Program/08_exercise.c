#include <stdio.h>

int main() {
    char star[] = "******";
    int row,space;
 
    for (row = 0 ; row < 4; row++){
        for (space = 0; space <= row * 6; space++){
            printf(" ");
        }
        printf("%s\n", star);
    }
    return 0;
}