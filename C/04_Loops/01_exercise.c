/* Напишете C програма за броене на честотата на цифрите в дадено число.
Input any number: 116540
Frequency of 0 = 1
Frequency of 1 = 2
Frequency of 2 = 0
Frequency of 3 = 0
Frequency of 4 = 1
Frequency of 5 = 1
Frequency of 6 = 1
Frequency of 7 = 0
Frequency of 8 = 0
Frequency of 9 = 0 */

#include <stdio.h>

int main(){

    int number;
    printf("Enter number - ");
    scanf("%d", &number);

    int curent, counter;
    for(int frequency = 0; frequency < 10; frequency++){
        counter = 0;
        for(int checker = number; checker > 0; checker /= 10){
            curent = checker % 10;
            if (curent == frequency)
                counter ++;
        }
        printf("Frequency of %d = %d\n", frequency, counter);
    }

    return 0;
}
