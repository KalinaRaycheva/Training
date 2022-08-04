/*
10) Премахнете всички битове на число след n-тия
бит включително
*/

#include <stdio.h>
void removeBitAfterN(int *num, int n)
{
    int mask = 1;
    for (int i = 1; i < n; i++)
    {
        mask |= 1 << i;
    }

    *(num) &= mask;
    // mask = 1 = 0000 0001
    // start of loop
    // mask = 0000 0001 | 0000 0010
    // mask = 0000 0011 | 0000 0100
    // mask = 0000 0111 | 0000 1000
    // mask = 0000 1111
    // end of loop
    // num = 255 = 1111 1111
    // num = 1111 1111 & 0000 1111
    // num = 0000 1111 = 15
}

int main()
{
    int num = 255;
    removeBitAfterN(&num, 4);
    printf("%d", num);
}