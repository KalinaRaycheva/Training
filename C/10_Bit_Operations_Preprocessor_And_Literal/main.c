#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point a;
    struct point b;
    struct point d;
};

int main(){
    struct rect c;
    struct rect *access = &c;
    c.a.x = 5;
    c.a.y = 6;
    c.b.x = 2;
    c.b.y = 3;

    printf("%d\n", c.a.x);
    printf("%d\n", c.b.x);
    printf("%d\n", c.a.y);
    printf("%d\n", c.b.y);
    printf("%d\n", c.a);
    printf("%d\n", c.b);
    printf("%d\n", c.d);
    printf("%d\n", access->a);

    return 0;
}


/*
0000
0001
0010
0011
0100
0101
0111
1000
1001
1011
01111
10000
10001
..............................................................
//try struct
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point a;
    struct point b;
    struct point d;
};

int main(){
    struct rect c;
    struct rect *access = &c;
    c.a.x = 5;
    c.a.y = 6;
    c.b.x = 2;
    c.b.y = 3;

    printf("%d\n", c.a.x);
    printf("%d\n", c.b.x);
    printf("%d\n", c.a.y);
    printf("%d\n", c.b.y);
    printf("%d\n", c.a);
    printf("%d\n", c.b);
    printf("%d\n", c.d);
    printf("%d\n", access->a);

    return 0;
}
.........................................................................
//try
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct hello{
    int age;
    float money;
    char arr[10];
};

void prin(struct hello* m);

int main(){
    struct hello first = {25,100.5};
    struct hello *a = &first;

    
    struct hello second = {25,100.5};
    struct hello *b = &second;

    a -> age = 10;
    a -> money = 100;
    printf("\n = %d", sizeof(struct hello));

    prin(&first);

    printf("\n age = %d", first.age);
    return 0;
}

void prin(struct hello* m){
    m -> age = 150;
}
......................................................
//Axcces to struct elements 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct testS{
    int num;
    float rate;
    struct testS *test;
};

int main(){
    struct testS stVar = {42, 3.14};
    struct testS* pVal = &stVar;

    printf("Value: %d", stVar.num);
    printf("Value: %lf", stVar.rate);

    stVar.num = 24;
    pVal ->   rate = 6.28;

    printf("Value: %d", stVar.num);
    printf("Value: %lf", stVar.rate);

}
.........................................................................................
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Указател char **envp
int main(int argc, char *argv[ ], char *envp[]){
    int envc = 0;
    char **p;
    for(p = envp, envc = 0; *p; p++, envc++){
        printf("env \t %d \t %s \n", envc, *p);
    }
    return 0;    
}
.......................................................................................
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct str x = {0, 0.0};
    printf("str.a = %d\n", x.a);
    char* ptr = (char*)&x;

    for(size_t i = 0; i < 4; i++)
    {
        *ptr = 1;
        ptr++;
    }

    printf("str.a = %d\n", x.a);

    return 0;    
}
........................................................................................
union color
{
    unsigned int rgb;
    unsigned int rgba;
    unsigned int value;
    char name[20];
};

int main()
{
    printf("sizeof(color) = %d\n", sizeof(union color));

    return 0;    
}

*/