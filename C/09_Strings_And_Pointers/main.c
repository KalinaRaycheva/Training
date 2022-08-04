


/*
//Write a program that reads lines of \n separated words from the standard input (until “end” word is
//met), reverse the order of all given words and outputs the result to the standard output (words should
//be space-delimited).

..................................................................................
#include <stdio.h>
#include <string.h>

int main(){
    char s[] = "asdf23^";
    char *u = "abc\nsdf";
    int d = strlen(u);

    printf("%c\n", *(u + 5));
    printf("%d\n", d);

    return 0;
}
.........................................................................................................
#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "Ivan";
    char ime[] = "Emo";
    int result = strcmp(name, ime);

    printf("%d", result);
}
...........................................................................................................
#include <stdio.h>
#include <string.h>

char *getText(){
    char * tmp;
    tmp = malloc(8 * sizeof(char));
    tmp = "Hellp";
    printf("in function getText\t%s\n", tmp);
    return tmp;
    free(tmp);
}

int main(){
    char *text;
    text = getText();
    printf("%s", text);
}
...........................................................................................................
#include <stdio.h>
#include <string.h>

int main(){
    char ** months;
    months = malloc(12*sizeof(char));
    months[0] = "January";
    months[1] = "February";
    
    for(int i = 0; i < 12; i++){
        printf("%s\n", months[i]);
    }
}
...........................................................................................................
//reverse str
#include <stdio.h>
#include <string.h>

void reverse(char str[], int len);

int main(){
    char str[] = "Hello";
    printf("%s\n", str);
    reverse(str,5);
    printf("%s", str);    
    return 0;
}


void reverse(char str[], int len){
    int end = len - 1;
    for(int i = 0; i < len / 2; i++){
        char tmp = str[i];
        str[i] = str[end];
        str[end] = tmp;
        end--;
    }
}
.......................................................................................................................
#include <stdio.h>
#include <string.h>

int main(){
    char s[100], r[100];
    printf("Enter a string - "); gets(s);

    strcpy(r, s);
    strrev(r);

    printf("Reverse of the string : %s\n", r);
    
    printf("%d", strcmp(s, r));
    return 0;
}

//This overwrites s, and for that it doen't work. We have to define another variable like above;
#include <stdio.h>
#include <string.h>

void reverse(char str[], int len);

int main(){
    char s[100];
    printf("Enter a string - "); gets(s);

    strrev(s);
    printf("Reverse of the string : %s\n", s);
    
    printf("%d", strcmp(s, strrev(s)));
    return 0;
}
...................................................................................................................
//change to upper <-> to lower
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char word[100]; scanf("%s, &word");
    int end = strlen(word);

    for(int i = 0;i < end; i++){
        //second way - if(word[i] > 'A' && word[i] <= Z)
        if(word[i] > 65 && word[i] <= 90)
            word[i] = tolower(word[i]);
        //second way - if(word[i] > 'a' && word[i] <= z)
        else if(word[i] >= 97 && word[i] <= 122)
            word[i] = toupper(word[i]);
    }
    
    printf("%s", word[i]);
    return 0
}
.....................................................................................................
//to set range

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[20], b[20];
    printf("Enter a string - "); gets(a);

    strcpy(b, a);
    strrev(b);

    if(strncmp(a, b, 3) == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
..................................................................................................

*/