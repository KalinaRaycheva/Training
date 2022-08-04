/*
18. Функция на Акерман се дефинира чрез две цели стойности M и N,
както следва:
Akerman(0, N) = N+1
Akerman(M, 0) = Akerman(M-1, 1)
Akerman(M, N) = Akerman(M-1, Akerman(M, N-1))
 Напишете рекурсивна и итеративна функция за изчисляване на
функцията на Акерман по зададени две стойности за M и N.
*/
#include "..\include\fnc.h"
#include <stdio.h>

int main()
{
	int m;
    int n;
    printf("Enter M and N: ");
    scanf("%d %d", &m, &n);

    printf("Result: %d", Ackermann(m, n));

	return (0);
}