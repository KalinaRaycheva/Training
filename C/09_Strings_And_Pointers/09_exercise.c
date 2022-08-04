/*
9) Напишете C програма за броене на срещания на дума в даден низ с помощта на цикъл.
*/

#include <stdio.h>
#include <string.h>

void search(char word[], char str[]);

int main(){
    char str[100], word[100];
    printf("Enter a string: "); gets(str);
    printf("Enter a word: "); gets(word);

    search(word, str);
    return 0;
}

void search(char word[], char str[]){
    char *p = strstr(str, word);

    if(p == NULL){
        printf("The word was not found.");
    }else{
        int counter = 1;
        int len = strlen(word);
        p++;

        do{
            p = strstr(p, word);
            if(p == NULL) break;
            
            p++;
            counter++;
        }while (p != NULL);
        printf("'%s' is repeated %d times in '%s'", word, counter, str);
    }
}