/*
8) Напишете C програма за премахване на допълнителните интервали и празни места от низ.
*/

#include <stdio.h>
#include <string.h>

void removeSymbol(char symbol, char text[]);

int main(){
    char symbol = ' ';
    char text[100];
    printf("Enter text - "); gets(text);
    removeSymbol(symbol, text);
    return 0;
}

void removeSymbol(char symbol, char text[]){
    int len_text = strlen(text);
    for(int i = 0; i < len_text; i++){
        if(text[i] == symbol){
            for(int j = i; j < len_text; j++){
                text[j] = text[j + 1];
            }
            len_text--;
            i--;
        }
    }

    printf("The text without '%c' symbols is -%s", symbol, text);
}