#include <stdio.h>

int main() {
   
   int number;
   do {
      printf("Enter six-digit number: ");
      scanf("%d", &number);
   } while (number < 100000 || number > 1000000);

   int first_num, third_num, fifth_num, sixth_num;
   first_num = number / 100000;
   third_num = (number / 1000) % 10;
   fifth_num = (number % 100) / 10;
   sixth_num = number % 10;

   number = first_num * 1000 + third_num * 100 + fifth_num * 10 + sixth_num;

   if (((year%4==0) && ((year%400==0) || (year%100!==0)) 
      printf("%d is a leap year.", &number);  
   else
      printf("%d is not a leap year.", &number);   
       
   return 0;
}