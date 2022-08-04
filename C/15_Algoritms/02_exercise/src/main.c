/*
12. Дадени са двe опашки от числа, подредени в нараства ред от началото
към края на опашката. Да се напише функция mergeQueues, която чрез
операциите InsertElem и DeleteElem построява нова опашка, която се състои
от всички елементи на дадените две опашки, подредени в нарастващ ред от
началото към края.
Пример: ако първата опашка съдържа 1, 3, 5, а втората опашка съдържа
числата 1, 2, 6, получената опашка трябва да съдържа числата 1, 1, 2, 3, 5, 6.
*/

#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main()
{
	Queue *firstQueue = QueueInit();
	fillQueue(firstQueue, SIZE);
	Queue *secondQueue = QueueInit();
	fillQueue(secondQueue, SIZE);
	Queue *thirdQueue = QueueInit();
	mergeQueues(firstQueue, secondQueue, thirdQueue, SIZE+SIZE);
	display(thirdQueue);

	return 0;
}