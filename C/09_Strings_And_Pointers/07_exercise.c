/*
7) Напишете C програма за отрязване както на водещите, така и на крайните символи за
празно пространство в низ с помощта на цикъл.
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
    //for remove symbol before text
    for(int i = 0; i < len_text; i++){
        if(text[i] == symbol){
            for(int k = i; k < len_text; k++){
                    text[k] = text[k+1];
                }
                len_text--;
                i--;
        }else{
            break;
        }
    }

    //for remove symbol after text
    for(int i = len_text; i > 0; i--){
        if(text[i] == symbol){
            for(int k = i; k > 0; k--){
                    text[k] = text[k-1];
                }
                len_text--;
                i++;
        }else{
            break;
        }
    }
    printf("The text without '%c' symbols is -%s", symbol, text);
}
