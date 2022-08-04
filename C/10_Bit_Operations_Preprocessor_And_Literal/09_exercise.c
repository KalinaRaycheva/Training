/*
Задача 6. Напишете макрос с променлив брой параметри,
който
извиква printf със префикс “TRACE: ”
*/

#include<stdio.h>
#include <stdarg.h>

#define PRINTF_P(...) printf( "TRACE: " __VA_ARGS__)

int main()
{
    PRINTF_P("a=%d,b=%d",10,12);
}