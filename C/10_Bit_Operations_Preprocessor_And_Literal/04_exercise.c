/*11*) Разбийте число като сума от степени на двойката.*/

#include <stdio.h>
#include <math.h>

void sumOfBits(int *num)
{
    int rightMostBit;
    for (int i = 0; (*num) >> i != 0; i++)
    {
        rightMostBit = (*num >> i) & 1;
        int pows = pow(2, i);
        printf("(%d * %d) + ", rightMostBit, pows);
    }
    printf(" = %d", *num);

    // num = 10 - 1010
    // start of loop
    //  rightMostBit = 1010 & 0001 = 0000  i = 0;
    //  rightMostBit = 0101 & 0001 = 0001  i = 1;
    //  rightMostBit = 0010 & 0001 = 0000  i = 2;
    //  rightMostBit = 0001 & 0001 = 0001  i = 3;
    // end of loop
}

int main()
{
    int num = 10;
    sumOfBits(&num);
}