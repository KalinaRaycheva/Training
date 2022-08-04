/*
4) Напишете програма на C, за да проверите дали даден низ е палиндром или не, без да
използвате цикъл.
*/

#include <stdio.h>
#include <string.h>

void isPalindrome(char *input, char *palindrome);

int main(){
    char input[100], palindrome[100];
    printf("Enter text - "); gets(input);
    isPalindrome(input, palindrome);
    return 0;
}

void isPalindrome(char *input, char *palindrome){
    strcpy(palindrome, input);
    strrev(palindrome);

    if(strcmp(input,palindrome) == 0)
        printf("The text is palindrome.");
    else
        printf("The text isn't palindrome.");
}