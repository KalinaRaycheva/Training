/*
Задача 3. Напишете C програма за преброяване на броя на
думите в низ.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int words(const char *sentence)
{
    int count=0,i,len;
    char lastC;
    len=strlen(sentence);
    if(len > 0)
    {
        lastC = sentence[0];
    }
    for(i=0; i<=len; i++)
    {
        if((sentence[i]==' ' || sentence[i]=='\0') && lastC != ' ')
        {
            count++;
        }
        lastC = sentence[i];
    }
    return count;
}

int main() 
{ 
    char str[30] = "a posse ad esse";
    printf("Words = %i\n", words(str));
}
