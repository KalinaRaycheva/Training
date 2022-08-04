#include <stdio.h>

int main() {

   //first figure
   int symbol = 11; 
   for (int i = 0; i < 6; i++) {
       for (int l = 0; l < i; l++)
           printf(" ");

       for (int k = 0; k < symbol; k++)
           printf("#");

       printf("\n");
       symbol -= 2;
   } 
   printf("\n");

   //second figure
   symbol = 1;
   for (int i = 0; i < 6; i++) {
       for (int l = 5; l > i; l--)
           printf(" ");

       for (int k = 0; k < symbol; k++)
           printf("#");

       printf("\n");
       symbol += 2;
   } 
   printf("\n");

   //third figure
   symbol = 1;
   for (int i = 0; i < 6; i++) {
       for (int l = 5; l > i; l--)
           printf(" ");

       for (int k = 0; k < symbol; k++)
           printf("#");

       printf("\n");
       symbol += 2;
   }

   symbol = 9; 
   for (int i = 0; i < 5; i++) {
       for (int l = -1; l < i; l++)
           printf(" ");

       for (int k = 0; k < symbol; k++)
           printf("#");

       printf("\n");
       symbol -= 2;
   }

   return 0;
}