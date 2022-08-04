/*
Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG
не е дефиниран, не печата нищо
*/

#include <stdio.h>
#include<stdio.h>
#define DEBUG 
#if defined(DEBUG)
#define PRINT printf("DEBUG IS DEFFINED")
#else
#define PRINT printf(" ");
#endif

int main(){
    PRINT;
    return 0;
}