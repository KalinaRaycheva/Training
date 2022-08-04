/*
10) Напишете C програма за премахване на всички срещания на дадена дума в низ с помощта
на цикъл.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void wordToRemove(char word[], char text[]);

int main(){
    char text[100], word[100];
    printf("Enter text - "); gets(text);
    printf("Enter word - "); gets(word);

    wordToRemove(word, text);
    return 0;
}

void wordToRemove(char word[], char text[]){
    char *p = strstr(text,word);
    int len_of_word = strlen(word);
    int len = strlen(p);

    while(p != NULL){
        for(int i = len_of_word; i > 0; i--){
            for(int j = 0; j <len; j++){
                *(p + j) = *(p + j + 1);
            }
        }
        p = strstr(text, word);
    }
    printf("The text after romoving duplicate words is - %s", text);
}


