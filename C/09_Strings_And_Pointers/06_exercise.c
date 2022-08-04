/*
6) Напишете C програма за премахване на всички повтарящи се символи в низ с помощта на
цикли.
*/

#include <stdio.h>
#include <string.h>

void removeRepeated(char text[]);

int main(){
    char text[100];
    printf("Enter text - "); gets(text);
    removeRepeated(text);
    return 0;
}

void removeRepeated(char text[]){
    int len = strlen(text);
    for(int i = 0; i < len; i++){
        if(text[i] == text[i+1]){
                for(int k = i+1; k < len; k++){
                    text[k] = text[k+1];
                }
                len --;
                i--;
            }
    }
    printf("The text without repeating symbols is - %s", text);
}
