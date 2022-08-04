#include "..\include\fnc.h"
#include <stdio.h>
#include <string.h>

queue * front , *rear;
int main()
{
	init();
	fillQueue();

	display();
	deQueue();

	return (0);
}