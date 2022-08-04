#include <stdio.h>

int main() {
   
   int number;
   do {
      printf("Enter six-digit number: ");
      scanf("%d", &number);
   } while (number < 100000 || number > 1000000);

   int odd_sum = 0, even_sum = 0, current = 0;
   for (int i = 0; i < 6; i++) {
      current = number % 10;
      number /= 10;

      if(current % 2 != 0)
         odd_sum += current;
      else
         even_sum += current;
   }   

   int rectangle_area = odd_sum * even_sum;
   printf("The area of the rectangle is %d.", rectangle_area);
   
   return 0;
}