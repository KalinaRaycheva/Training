#include <stdio.h>

int main() {
   
   int caravans_number = 3;
   int caravan_price = 90;
   int campers_number = 3;
   int camper_price = 100;
   int menu, income;
   
   do {
      printf("Choose what you prefer and press 1 for caravan or 2 for a camper? ");
      scanf("%d", &menu);
   } while (menu != 1 && menu != 2);
   
   switch (menu) {
      case 1:
         printf("You choose caravan!\nThe price per day is %d. For how many days do you want to rent?", caravan_price);
         scanf("%d", &menu);
         income = menu * caravan_price;
         printf("You choose caravan for %d days and owe %d.", menu, income);
         break;
       case 2:
         printf("You choose camper!\nThe price per day is %d. For how many days do you want to rent?", camper_price);
         scanf("%d", &menu);
         income = menu * camper_price;
         printf("You choose camper for %d days and owe %d.", menu, income);
   }

   return 0;
}