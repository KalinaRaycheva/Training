/*
8) Намерете позицията на най-старшия бит, който е 
със стойност 1 в дадено число.
*/

#include <stdio.h>

int highestBit(int number);

int main(){ 
    int number;
    printf("Enter number - "); scanf("%d", &number);
    printf("%d\n", highestBit(number));
    return 0;
}

int highestBit(int number){
    int result = 1;
    while(number >>= 1)
        result++;
    return result;
}

/*
//opposite
#include<stdio.h>

int main(){
   int num = 15;
   int i = 1;
   for( i  ; i<8 ; i++){
       if(num&1){
           break;
       }
       num>>=1; 
   }
   printf("%d",i);

}
*/