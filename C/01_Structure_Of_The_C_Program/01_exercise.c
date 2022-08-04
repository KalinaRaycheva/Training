#include <stdio.h>

int main() {
    float weight;
    
    printf("Enter your weight -> ");
    scanf("%f", &weight);

    printf("Your weight on the moon is -> %.2fkg.", weight * 0.17);
    return 0;
}