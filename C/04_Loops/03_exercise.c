/* Дадено е наредено тесте карти.
Наредбата по тежест на карта е:
2,3,4,5,6,7,8,9,10, Вале, Дама, Поп, Асо.
Наредбата по цвят на картите е:
трефа, каро, купа, пика.
Да се създаде програма на C, чрез която се въвежда N естествено число от интервала
[1..51] и се извеждат въведения номер карта и останалите по-големи карти от тестето.
Използвайте вложен цикъл.
Пример:
47
Изход:
Поп купа, Поп пика, Асо трефа, Асо каро, Асо купа, Асо пика */
 
#include <stdio.h>
 
int main(){
 
   int N;
   do{
       printf("Enter number from 1 to 52 - ");
       scanf("%d", &N);
   }while(N < 1 || N > 52);
 
   while(N < 53){
       int card = (N -1) / 4;
       int sign = (N -1) % 4;
 
       switch(card){
           case 9:
           printf("Jack ");
           break;
           case 10:
           printf("Qeen ");
           break;
           case 11:
           printf("King ");
           break;
           case 12:
           printf("Ace ");
           break;
           default:
           printf("%d ", card + 2);
           break;
       }
 
       switch(sign){
           case 0:
           printf("Spatia");
           break;
           case 1:
           printf("Diamond");
           break;
           case 2:
           printf("Bowl");
           break;
           case 3:
           printf("Spade");
           break;
       }

       if(N < 52)
           printf(", ");
 
       N++;
   }
 
    return 0;
}