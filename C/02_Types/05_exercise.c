#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main() {
   bool b[20];
   int v;
   scanf("%d", &v);

   for (int l = 0; l < 20; l++) {
      for (int j = 0;  j < 20;  ++j)
         b [j] =  0 != (v & (1 << j));
        
      for (int i = 19; i >= 0; i--) {
         if(b[i] == 0)
            printf(".");
         else
            printf("*");
         usleep(5000);
        }

      printf("\n");
      v = v << 1;
   }

   return 0;