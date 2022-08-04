/*
Задача 1. Направете две функции и извикайте желаната функция с указател към функция, съобразно
знака, подаден от командния ред:
Пример: а.exe 20 + 3

#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int ( * pfCalc ) ( int, int ) = NULL;
*/

#include <stdio.h>
#include <stdlib.h>

int fnPlus(int nA, int nB);
int fnMinus(int nA, int nB);

int main(int argc, char *argv[]){

    for(int i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

    int nums[2] = {0};

    nums[0] = atoi(argv[1]);
    nums[1] = atoi(argv[3]);

    if(argv[2][0] == '+')
        printf("%d + %d = %d", nums[0], nums[1], fnPlus(nums[0], nums[1]));
    else
        printf("%d - %d = %d", nums[0], nums[1], fnMinus(nums[0], nums[1]));

    return 0;
}

int fnPlus(int nA, int nB){ return nA + nB; }
int fnMinus(int nA, int nB){ return nA - nB; }
