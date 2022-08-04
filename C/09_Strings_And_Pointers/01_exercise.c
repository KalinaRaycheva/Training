/*
1) Напишете C програма за намиране на дължината на низ с помощта на цикъл, без да
използвате вградена библиотечна функция strlen() .
*/

#include <stdio.h>
#include <string.h>

int main(){ 

    int input = 0, counter = 0;

    printf("Enter input - ");
    while((input = getchar()) != '\n'){
        counter++;
    }
    
    printf("%d", counter);
    return 0;
}

/*
//second way
#include <stdio.h>
#include <string.h>

int main(){ 
    int counter = 0;
    char input[100];
    
    printf("Enter input - "); gets(input);
    for(int i=0; input[i]!='\0'; ++i){
        counter++;
    }

    printf("%d", counter);
    return 0;
}
*/