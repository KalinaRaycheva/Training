#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

void convertHours(char *string)
{
    int h1 = (int)string[0] - '0';
    int h2 = (int)string[1] - '0';
    int hours = h1 * 10 + h2;
    if (strstr(string, "AM") == NULL)
    {
        if (hours != 12)
            hours += 12;
    }
    else if (hours == 12)
        hours = 0;
    char *left = strstr(string, ":");
    printf("%02d%.6s", hours, left);
}