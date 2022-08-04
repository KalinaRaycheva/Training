#include <stdio.h>

int main() {
    int earth_days;
    printf("Enter the days on Earth -> ");
    scanf("%d", &earth_days);

    int earth_years = earth_days / 365;
    int leap_days = earth_years / 4;
    if (leap_days >= 365){
        earth_years += leap_days/365;
    }

    int jupiter_years = earth_years / 12;
    printf("The years on Jupiter are -> %d", jupiter_years);
    return 0;
}