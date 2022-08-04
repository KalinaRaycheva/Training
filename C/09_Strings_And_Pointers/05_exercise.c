/*
5) Напишете C програма за намиране на символа с най-висока честота в низ с помощта на
цикъл. 
*/

#include <stdio.h>
#include <string.h>

int mostFrequent(char text[]);

int main(){
    char input[100];
    printf("Enter text - "); gets(input);
    printf("The highest frequency is - %c", mostFrequent(input));
    return 0;
}

int mostFrequent(char input[]){
    int counter = 1, cheker = 0;
    char max = input[0];
    for(int i = 0; i < strlen(input); i++){
        for (int j = 0; j < strlen(input); j++){
            if(input[i] == input[j])
                counter++;
        }

        if(cheker < counter){
            cheker = counter;
            max = input[i];
        }

        counter = 0;
    }
    return max;
}

