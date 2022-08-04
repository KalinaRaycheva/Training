/*
Функция, която по зададени граници на интервал [a,b] , намира и
извежда сумата от четните числа от този интервал.
*/

#include <stdio.h>

int evenNumSum();

int main(){
    int a, b = 0;
    printf("Enter first limit - ");
    scanf("%d", &a);
    printf("Enter second limit - ");
    scanf("%d", &b);

    printf("The sum of even numberd from %d to %d is %d", a, b, evenNumSum(a, b));

    return 0;
}

int evenNumSum(int a, int b){
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0)
            sum += i;
    }
    return sum;
}
