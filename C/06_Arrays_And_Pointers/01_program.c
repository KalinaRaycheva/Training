#include <stdio.h>

void film(int, char[]);

int main(){
    int i = 5;
    char x[] = "you and me";
    printf("i = %d, x = %s\n", i, x);
    film(i, x);
    printf("i = %d, x = %s\n", i, x);
}

void film(int i, char z[]){
    printf("\nIn the film, i = %d, z = %s\n", i, z);
    i = 0;
    z[0] = 'Y';
    printf("In the film, i = %d, z = %s\n", i, z);
}

/*
#include <stdio.h>

void film(int, char[]);

int main(){
    int i = 5;
    char x[] = "you and me";
    printf("i = %d, x = %s \n&i = %p, &x[0] = %p\n", i, x, &i, &x[0]);

    film(i, x);
    printf("i = %d, x = %s \n&i = %p, &x[0] = %p\n\n", i, x, &i, &x[0]);
}

void film(int i, char z[]){
    printf("\nIn the film, i = %d, z = %s \n&i = %p, &z[0] = %p\n\n", i, z, &i, &z[0]);
    i = 0;
    z[0] = 'M';
    printf("In the film, i = %d, z = %s \n&i = %p, &z[0] = %p\n\n", i, z, &i, &z[0]);
}
*/
