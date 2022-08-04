/*
Задача 4. Дефинирайте тип указател към функция, която изпълнява определена
операция върху две целочислени променливи. Дефинирайте функции, които
изпълняват операциите +, -, *, /. Използвайте новия тип, за да извикате всяка една
от функциите.

typedef int (*Ptr)(int,int);
Вместо кода
int (*Convert(const char code)) (int, int) {
if (code = = ‘+’) return &Sum;
if (code = = ‘-’) return &Difference;
}
записваме
Ptr Convert(const char code) {
if (code = = ‘+’) return &Sum;
if (code = = ‘-’) return &Difference;
}
int main ( ) {
Ptr ptr;
ptr = Convert(‘+’);
printf( “%d \n”, ptr(2,4));
}
http://www.cs.cmu.edu/~ab/15-123N09/lectures/Lecture%2008%20-%20Function%20Pointers.pdf
*/
#include <stdio.h>

typedef int (*Ptr)(int, int);

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

Ptr convert(const char code)
{
    if (code == '+')
        return &sum;
    
    if (code == '-')
        return &sub;
    
    if (code == '*')
        return &mul;

    if (code == '/')
        return &div;
}

int main()
{
    int a = 5;
    int b = 3;
    Ptr ptr;
    ptr = convert('+');

    printf("The sum of %d + %d = % d\n", a, b, ptr(a, b));

    ptr = convert('-');

    printf("The sub of %d - %d = % d\n", a, b, ptr(a, b));

    ptr = convert('*');

    printf("The mul of %d * %d = % d\n", a, b, ptr(a, b));

    ptr = convert('/');

    printf("The div of %d / %d = % d", a, b, ptr(a, b));
}