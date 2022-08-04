/*
Задача 1. Напишете програма, която чете стринг от стандартния вход и го
извежда на стандартния изход с функцията fgets();
*/

#include <stdio.h>
#define MAX 15

int main()
{
    char buf[MAX];
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);
  
    return 0;
}