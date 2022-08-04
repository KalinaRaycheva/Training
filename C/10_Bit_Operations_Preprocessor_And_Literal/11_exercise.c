/*
Задача 6. Запишете в четири последователни байтове в паметта със стойност
0xAA(10101010) и разпечатайте съдържанието на горните байтове, ако типът е: float,
signed int, unsigned int
*/

#include <stdio.h>

int main()
{
    // Initialize a four-byte integer with easily distinguishable byte values
    float value = 0xAA;

    // Initialize a character pointer to the address of the integer.
    char *p = (char *)&value;

    // For each byte in the integer, print its memory address and value.
    int i;
    for (i = 0; i < sizeof(value); i++)
    {
        printf("Address: %p, Value: %02hhX\n", p, *p);
        p += 1;
    }

    return 0;
}