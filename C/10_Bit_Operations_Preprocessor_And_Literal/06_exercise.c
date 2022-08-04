/*
13*) Намерете броя на позициите на битовете, в които две
числа се различават.
*/

#include <stdio.h>
int countOfDifferent(int num, int num1)
{
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((num >> i) & 1) != ((num1 >> i) & 1))
        {
            count++;
        }
    }
    return count;
    // num = 15 - 1111
    // num = 10 - 1010
    // start of loop
    // (1111 & 0001 = 0001) != (1010 & 0001 = 0000) TRUE  count=1;
    // (0111 & 0001 = 0001) != (0101 & 0001 = 0001) FALSE count=0;
    // (0011 & 0001 = 0001) != (0010 & 0001 = 0000) TRUE  count=2;
    // (0001 & 0001 = 0001) != (0001 & 0001 = 0001) FALSE count=2;
    //....
    // end of loop
}

int main()
{
    int num = 15;
    int num1 = 10;
    printf("%d", countOfDifferent(num, num1));
}