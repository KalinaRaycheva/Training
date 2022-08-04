/*
3) Напишете C програма за сравняване на два низа, използвайки цикъл символ по символ, без
да използвате вградена библиотечна функция strcmp()
*/

#include <stdio.h>
#include <string.h>

void comparison(char str1[], char str2[]);

int main(){

    char str1[100], str2[100];
    printf("Enter first text - "); gets(str1);
    printf("Enter second text - "); gets(str2);

    comparison(str1, str2);
    return 0;
}

void comparison(char str1[], char str2[]){
    int i;
    for(i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++);

    if(str1[i] < str2[i])
        printf("%s is less than %s", str1, str2);
    else if(str2[i] < str1[i])
        printf("%s is less than %s", str2, str1);
    else
        printf("%s is equal to %s", str1, str2);
}
