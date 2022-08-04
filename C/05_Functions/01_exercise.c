/*
19. Да се напише рекурсивна функция
int numPrint(int n),
С помощта на която се отпечатват всички естествени числа до 100.
*/

#include <stdio.h>
int numPrint();

int main(){
    printf("%d", numPrint(0));
    return 0;
}

int numPrint(int n){
    if(n == 100)
        return n;

    printf("%d\t", n);

    return numPrint(++n);
}
