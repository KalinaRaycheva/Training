/*
14*) Обърнете битовете на число, които се намират на
нечетна позиция.
*/

#include <stdio.h>
void reverseBitOnOddPosition(int *num)
{

    for (int i = 0; (*(num) >> i) != 0; i += 2)
    {
        *num ^= 1 << i;
    }
    // num = 10 - 1010
    // start of loop
    // num = 1010 ^ 0001 = 1011
    // num = 1111 ^ 0100 = 1111
    // end of loop
    //  num = 10 - 1010
}

int main()
{
    int num = 10;
    reverseBitOnOddPosition(&num);
    printf("%d", num);
}