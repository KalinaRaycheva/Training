/*
17.А. Реализирайте стек, поддържащ операцията намиране на
максимална сума сред елементите на стека.
*/
#include "..\include\fnc.h"
#include "..\include\stack.h"
#include <stdio.h>

int main()
{
	int size = setStackSize();
	Stack *nums = initStack();
	fillStack(nums, size);
	printf("Sum = %d", maxSum(nums));
	return (0);
}
