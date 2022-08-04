#include <stdio.h>
#define MAX_GF 20

int main()
{
    printf("Hello\n");
    #if MAX_GF >=50
    printf("Wau, you may have more than 50 girlfriends\n");
    printf("Code for more than 50 GFs\n");
    #else
    printf("Wau, you may have not more than 50 girlfriends\n");
    printf("Code for less than 50 GFs\n");
    #endif
    printd("Bye!\n");
    return 0;
}











































/*
........................................
7)A:
#include <stdio.h>
 
#include <stdio.h>
#include <stdlib.h>
 
typedef struct key
{
    char *string;
    int value;
}keyy[2];

int main ()
{
    keyy *newKey = (keyy*)malloc(sizeof(keyy)*2);
    // arrKey newKey;
    for (size_t i = 0; i < 2; i++)
    {
        newKey[i]->string = malloc(10);
        newKey[i]->value = i;
        newKey[i]->string = "hello";
    }
 
    for (size_t i = 0; i < 2; i++)
    {
        printf("%s\t%d\n", newKey[i]->string, newKey[i]->value);
    }
    for (size_t i = 0; i < 2; i++)
    {
        free(newKey[i]->string);
    }
}
..................................................................
7)B:
#include <stdio.h>
 
#include <stdio.h>
#include <stdlib.h>
 
 
typedef struct key
{
    char *string;
    int value;
}*key , arrKey[2];
 
int main ()
{
    key newKey = malloc(sizeof(key)*2);
    // arrKey newKey;
    for (size_t i = 0; i < 2; i++)
    {
        newKey[i].string = malloc(10);
        newKey[i].value = i;
        newKey[i].string = "hello";
    }
 
    for (size_t i = 0; i < 2; i++)
    {
 
        printf("%s\t%d\n", newKey[i].string, newKey[i].value);
 
 
    }
    for (size_t i = 0; i < 2; i++)
    {
        free(newKey[i].string);
    }
 
 
}
.......................................................
6)
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *arr;
    int x;
}key_t;

int main()
{
    key_t *ptr;
    ptr->arr = (char*)malloc(3*sizeof(char));
    ptr->arr = "ala";
    ptr->x = 5;
    printf("%d, %s", ptr->x, ptr->arr);
}

........................................................
5)
#include <stdio.h>

typedef int arr[10];

int main()
{
    arr a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
..................................................................................
4)
#include <stdio.h>

typedef int (*ptf)(int, int);
typedef int addition(int x, int y) { return a + b; };
typedef int subtract(int x, int y){return a - b};
typedef int multiplication(int x, int y){return a * b};
typedef int division(int x, int y){return a / b};

int main()
{
    ptf p = plus;
    printf("%d\n", p(4, 4));

    ptf p = subtract;
    printf("%d\n", p(4, 4));

    ptf p = multiplication;
    printf("%d\n", p(4, 4));

    ptf p = division;
    printf("%d\n", p(4, 4));
    return 0;
}

.........................................................
3)
#include <stdio.h>

typedef int* num;

int main(){
    int a = 5;
    num b = &a;
    printf("%d", *b);
    return 0;
}
......................................................
1)
#include <stdio.h>

typedef struct persons;

typedef struct
{
    int id;
    char name[20];
    struct persons *next;
}persons;

int main(){
    persons p1 = {1, "kali"};
    printf("%d. %s\n", p1.id, p1.name);
    return 0;
}

................................
#include <stdio.h>

typedef int length;
typedef char C, *S;

int add(int a, int b)
{
    return a+b;
}

typedef int(*opt)(int,int);

int main(){
    length n = 100;
    C c = 'c';
    S s = "Hello";
    printf("%d %c %s\n", n, c, s);
    opt fpadd = &add;
    printf("%d\n", (*fpadd)(1,3));
}
*/