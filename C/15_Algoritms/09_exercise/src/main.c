/*
19. Напишете рекурсивни функции
max, min, sum, product, mean,
за намиране съответно на максимум, минимум, сума, произведение и
средно аритметично на елементите на масив от цели числа.
Масивът и броят елементи в него се подават като параметри на
функциите . 
*/
#include "fnc.h"

int main()
{
    int arr[6] = {1, 2, 4, 1, 1, 1};
    printf("%d\n", getMax(arr, 6));
    printf("%d\n", getMin(arr, 6));
    printf("%d\n", getSum(arr, 6));
    printf("%d\n", getProduct(arr, 6));
    printf("%f\n", getAverage(arr, 6));

    return 0;
}