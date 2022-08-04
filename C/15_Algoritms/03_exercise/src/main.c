/*
13. Да се състави програма която създава динамичен стек S след което
променя N-я от дъното елемент със стойност A, а първите N-1 елемента от
дъното запазват своите стойности.
*/
#include "..\include\fnc.h"
#include "..\include\stack.h"
#include <stdio.h>

int main()
{
	int size = 0;
	printf("Enter size: "); scanf("%d", &size);
	Stack *numbers = initStack();
	fillStack(numbers, size);

    int position = 0, data = 0;
    printf("Enter position of element you want to change: "); scanf("%d", &position);
    printf("Enter data you want to add: "); scanf("%d", &data);
    changeElement(numbers, position, data);

    display(numbers);
	return (0);
}
