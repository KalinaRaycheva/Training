/* Да се състави програма на C, чрез която се въвеждат естествени числа от интервала
[1..50].
Програмата да преустановява работата си при въвеждане на 2 последователни числа,
които са равни.
Програмата да извежда
броя на въведените числа и тяхната средна стойност.
Пример:
1,2,3,4,5,5
Изход:
брой 6, средна стойност 3.33333.
Използвайте вложени цикли. */

#include <stdio.h>

int main(){

   int num = 0;
   int previous = 1;
   int counter = 1;
   float average;
   
   while(num != previous){
       previous = num;
       printf("Enter number from 1 to 50 - ");
       scanf("%d", &num);
       average += num;
       counter ++;
   }

    printf("Count %d, average value %f", counter, average / counter);

    return 0;
}