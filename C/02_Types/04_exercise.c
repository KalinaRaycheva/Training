#include <stdio.h>

int main() {
   
   float tomatoes_price = 4.50;
   float flour_price = 1.80;
   float yogurt_price = 0.50;
   float ice_cream_price = 0.60;
   float sweets_price = 1.50;
   float lollipops_price = 1.50;
   float bill;
   int menu;
   
   do {
      printf("Choose what you want to buy and press the number.\n");
      printf("0-End shopping;\n");
      printf("1-Tomatoes (4.50 per kg);\n");
      printf("2-Flour (1.80 per kg);\n");
      printf("3-Yogurt (0.50 each);\n");
      printf("4-Funel ice cream (0.60 each);\n");
      printf("5-Sweets (1.50 per kg);\n");
      printf("6-Lollipops (1.50 each);\n");
      scanf("%d", &menu);

      switch (menu){
         case 0:
         printf("You choose to stop shopping. Your bill is %0.2f. Thank you for shopping.", bill);
         break;
         case 1:
         bill += tomatoes_price;
         printf("You choose 1 kg tomatoes. Your bill till now is %0.2f.\n", bill);
         break;
         case 2:
         bill += flour_price;
         printf("You choose 1 kg flour. Your bill till now is %0.2f.\n", bill);
         break;
         case 3:
         bill += yogurt_price;
         printf("You choose 1 piece yogurt. Your bill till now is %0.2f.\n", bill);
         break;
         case 4:
         bill += ice_cream_price;
         printf("You choose 1 piece ice cream. Your bill till now is %0.2f.\n", bill);
         break;
         case 5:
         bill += sweets_price;
         printf("You choose 1 kg sweets. Your bill till now is %0.2f.\n", bill);
         break;
         case 6:
         bill += lollipops_price;
         printf("You choose 1 piece lollipops. Your bill till now is %0.2f.\n", bill);
         break;
      }

   } while (menu != 0);

   return 0;
}