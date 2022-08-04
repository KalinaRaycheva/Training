/*
Задача 5. Напишете C програма за намиране на всички срещания на
символ в низ.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], character;
    int i, Count;
    Count = 0;

    printf("Enter string: ");
    gets(str);

    printf("\nEnter the character that you want to search for: ");
    scanf("%c", &character);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == character)
        {
            Count++;
        }
    }
    printf("\n The number of times '%c' has occured is %d ", character, Count);

    return 0;
}