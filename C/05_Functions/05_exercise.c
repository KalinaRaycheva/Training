/*
Да се напише функция с име isTriangle, която по дадени три цели
числа определя дали съществува триъгълник със страни тези числа.
*/

#include <stdio.h>
#include <stdbool.h>

bool isTriangle();

int main(){
    int a, b, c = 0;
    printf("Enter first side - ");
    scanf("%d", &a);
    printf("Enter second side - ");
    scanf("%d", &b);
    printf("Enter third side - ");
    scanf("%d", &c);

    if (isTriangle(a,b,c))
        printf("There is a triangle with sides %d, %d, %d.", a, b, c);
    else
        printf("There isn't a triangle with sides %d, %d, %d.", a, b, c);

    return 0;
}

bool isTriangle(int a, int b, int c){
    if(a < b + c && b < a + c && c < a + b)
        return true;
    else
        return false;
}
