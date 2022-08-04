/*
2.- (преговор често използвани функции) Напишете следните функции:
● Функция, която проверявя дали едно число е просто
● Функция, която връща най-големия общ делител на две числа
● Функция, която използва горната функция и по даден като параметър
 масив от цели числа, връща НОД на елементите от масива
*/

#include "..\include\fnc.h"
#include <stdio.h>

int main()
{
	isPrime();

	int number1 = 0, number2 = 0;
    printf("Enter first integer: "); scanf("%d", &number1);
    printf("Enter second integer: "); scanf("%d", &number2);
	printf("Greatest common divisor of %d and %d is %d\n", number1, number2, GCDTwoNums(number1, number2));

	int size = 0;
	printf("Enter size of array - "); 
	scanf("%d", &size);
	int arr[size];
	fillArr(arr, size);
	printf("The Greatest Common Divisor of array is %d\n", GCDArray(arr, size));

	return (0);
}