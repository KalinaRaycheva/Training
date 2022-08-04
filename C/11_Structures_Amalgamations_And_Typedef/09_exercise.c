/*
Задача 11. Създайте структура
fraction (аритметична дроб) с член данни int n(nominator=числител)
и int d (denominator=знаменател)
С помощта на typedef struct създайте нов тип FRACTION
и указател към него *FPTR
Дефинирайте функциите
FRACTION create(int numerator, int denominator);-създаване на дроб по дадени
стойности на числител и знаменател
FRACTION input(void);-създаване на дроб по стойности въведени от клавиатурата
void print(FPTR); - отпечатване на дроб
int gcd(int first_dividend, int second_dividend); - НОД
FRACTION add(FPTR, FPTR); -събиране на две дроби
FRACTION mult(FPTR, FPTR);-умножение на две дроби
FRACTION divide(FPTR, FPTR);-деление на две дроби
FRACTION subtract(FPTR, FPTR);-изваждане на две дроби
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int nominator;
    int denominator;
} fraction;

typedef struct
{
    fraction *FPTR;
} FRACTION;

FRACTION create(int nomerator, int denominator)
{
    FRACTION f;
    fraction *frac = (fraction *)malloc(sizeof(fraction));
    f.FPTR = frac;
    f.FPTR->nominator = nomerator;
    f.FPTR->denominator = denominator;
    return f;
}
FRACTION input()
{
    FRACTION f;
    fraction *frac = (fraction *)malloc(sizeof(fraction));
    f.FPTR = frac;
    printf("Enter nominator: ");
    scanf("%d", &f.FPTR->nominator);
    printf("Enter denominator: ");
    scanf("%d", &f.FPTR->denominator);
    return f;
}
void print(FRACTION f)
{
    printf("%d/%d\n", f.FPTR->nominator, f.FPTR->denominator);
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void lowest(int *a, int *b)
{
    int common_factor = gcd(*a, *b);

    *b = *b / common_factor;
    *a = *a / common_factor;
}

FRACTION add(FRACTION f, FRACTION f1)
{
    FRACTION c;
    fraction *frac = (fraction *)malloc(sizeof(fraction));
    c.FPTR = frac;
    c.FPTR->denominator = gcd(f.FPTR->denominator, f1.FPTR->denominator);
    c.FPTR->denominator = (f.FPTR->denominator * f1.FPTR->denominator) / c.FPTR->denominator;
    c.FPTR->nominator = (f.FPTR->nominator) * (c.FPTR->denominator / f.FPTR->denominator) + (f1.FPTR->nominator) * (c.FPTR->denominator / f1.FPTR->denominator);
    lowest(&c.FPTR->nominator, &c.FPTR->denominator);
    return c;
}

FRACTION mult(FRACTION f, FRACTION f1)
{
    FRACTION c;
    fraction *frac = (fraction *)malloc(sizeof(fraction));
    c.FPTR = frac;
    c.FPTR->nominator = f.FPTR->nominator * f1.FPTR->nominator;
    c.FPTR->denominator = f.FPTR->denominator * f1.FPTR->denominator;
    lowest(&c.FPTR->nominator, &c.FPTR->denominator);
    return c;
}

FRACTION divide(FRACTION f, FRACTION f1)
{
    FRACTION c;
    fraction *frac = (fraction *)malloc(sizeof(fraction));
    c.FPTR = frac;
    c.FPTR->nominator = f.FPTR->nominator * f1.FPTR->denominator;
    c.FPTR->denominator = f.FPTR->denominator * f1.FPTR->nominator;
    lowest(&c.FPTR->nominator, &c.FPTR->denominator);
    return c;
}
FRACTION subtract(FRACTION f, FRACTION f1)
{
    FRACTION c;
    fraction *frac = (fraction *)malloc(sizeof(fraction));
    c.FPTR = frac;
    c.FPTR->denominator = gcd(f.FPTR->denominator, f1.FPTR->denominator);
    c.FPTR->denominator = (f.FPTR->denominator * f1.FPTR->denominator) / c.FPTR->denominator;
    c.FPTR->nominator = (f.FPTR->nominator) * (c.FPTR->denominator / f.FPTR->denominator) - (f1.FPTR->nominator) * (c.FPTR->denominator / f1.FPTR->denominator);
    lowest(&c.FPTR->nominator, &c.FPTR->denominator);
    return c;
}

int main()
{
    FRACTION f = input();
    FRACTION b = input();

    FRACTION c = add(f, b);
    print(c);
    c = mult(f, b);
    print(c);
    c = divide(f, b);
    print(c);
    c = subtract(f, b);
    print(c);
}
