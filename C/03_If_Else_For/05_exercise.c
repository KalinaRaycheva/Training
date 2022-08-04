#include <stdio.h>

int main(){

    int sum = 0;

    //Condition a
    for(int i = 1; i <= 41; i += 2)
        sum += i * 2;

    printf("The sum of the doubled odd elements in the row of 41 elements is - %d\n", sum);

    //Condition b
    int elements_count = 0;
    printf("Enter elements count you want - ");
    scanf("%d", &elements_count);

    sum = 0;
    for(int i = 1; i <= elements_count; i += 2)
        sum += i * 2;

    printf("The sum of the doubled odd elements in the row of %d elements is - %d\n", elements_count, sum);

    //Condition c
    int new_elements_count = 0;
    printf("Enter elements count you want - ");
    scanf("%d", &new_elements_count);

    if (new_elements_count % 2 == 0)
        new_elements_count -= 1;

    sum = 0;
    for(int i = new_elements_count; i >= 0; i -= 2)
        sum += i * 2;

    printf("The sum of the doubled odd elements in the row of %d elements is - %d\n", new_elements_count, sum);

    //Condition d
    sum = 0;
    for(int i = 1; ; i += 2){
        if(sum > 999){
            break;
        }
        sum += i * 2;
    }

    printf("The sum of the doubled odd elements, when the sum is upper than 999, is - %d\n", sum);

    return 0;
}