/*
2) Напишете C програма за свързване на два низа в един низ, без да използвате библиотечна
функция strcat().
*/

#include <stdio.h>
#include <string.h>

void connectingString(char str1[], char str2[]);

int main(){
    char str1[100], str2[100];
    printf("Enter first text - "); gets(str1);
    printf("Enter second text - "); gets(str2);

    connectingString(str1, str2);
    return 0;
}

void connectingString(char str1[], char str2[]){
    int current = strlen(str1);
    int j = 0;
    while(str2[j] != '\0'){
        str1[current] = str2[j];
        j++;
        current++;
    }

    printf("Output: %s",str1);
}


/*
#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    printf("Enter first text - "); gets(str1);
    printf("Enter second text - "); gets(str2);

    int i = 1;
    while(str1[i] != '\0'){
        i++;
        printf("%d\n",i);
    }

    int j = 0;
    while(str2[j] != '\0'){
        str1[i] = str2[j];
        j++;
        i++;
    }

    printf("\nOutput: %s",str1);
    return 0;
}
*/