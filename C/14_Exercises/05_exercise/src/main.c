/*
5. Напишете функция, която по даден е масив от цели числа изчислява
процента на неговите елементи, които са положителни, които са отрицателни и
които са нула. Резултатът, който връща функцията да бъде масив от числа между 0
и 1, даващи пропорцията на всеки вид числа.
● Програмата чете масива от числа, извиква горната функция и отпечатва като резултат
процентите всеки на нов ред с 6 цифри след десетичната запетая.
Example :
4. arr = [1,1,0, -1,-1]
5.
There are n =5 elements, two positive, two negative and one zero. Their ratios are 2/5=0.400000 ,
2/5=0.400000 and 1/5 = 0.200000 . Results are printed as:
6. 0.400000
7. 0.400000
8. 0.200000
*/
#include "..\include\fnc.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number count: "); 
	scanf("%d", &n);
	int *arr = (int*)malloc(sizeof(int)*n);
	fillArr(arr, n);	

	double *result = countInprc(arr, n);
	printPoint(result, n);
	free(arr);
	return (0);
}