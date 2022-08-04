/*
 6. Даден e масив от 5 положителни числа. Да се напишат две функции, които
намират минималната и максималната стойност, които могат да се
изчислят, като се сумират точно 4 от тези 5 числа.
● Програмата чете масива от тези 5 числа, извиква съответните функции и
отпечатва съответно minimum и maximum стойностите, всяка на нов ред.
arr = [1,3,5,7,9]
minimum sum is 1 + 3 + 5 + 7 = 16
maximum sum is 3 + 5 + 7 + 9 = 24.
5. отпечатва се 16 24 
*/
#include "..\include\fnc.h"
#include <stdio.h>

int main()
{
	int num_count = 0;
	printf("Enter count of num you want to add.- "); scanf("%d", &num_count);
	
	int num_arr[num_count];
	fillArray(num_arr, num_count);

	printf("%d\n", arrSum(num_arr, num_count) - maxInArr(num_arr, num_count)); //minimum value
	printf("%d\n", arrSum(num_arr, num_count) - minInArr(num_arr, num_count)); //maximum value
	return (0);
}
