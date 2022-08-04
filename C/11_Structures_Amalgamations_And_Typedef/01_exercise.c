/*
Задача 3. Напишете програма, която калкулира разликата на
два времеви периода, изразени във векове, години, месеци, дни,
минути, секудни. Принтирайте изходните периоди и резултата.
*/

#include <stdio.h>

#define CENTURIE_SECONDS 3155760000
#define YEARS_SECONDS 31556926 
#define LEAP_YEARS_SECONDS 31622400
#define MONTHS28_SECONDS 2419200
#define MONTHS30_SECONDS 2592000
#define MONTHS31_SECONDS 2678400
#define MONTHS_SECONDS 2628000
#define DAYS_SECONDS 86400
#define MINUTES_SECONDS 60

struct period{
    int centuries;
    int years;
    int months;
    int days;
    int minutes;
    int seconds;
};

struct period periodsDifference(struct period period1, struct period period2);
struct period fillPeriod();

int main(){
    struct period period1 = fillPeriod(); 
    struct period period2 = fillPeriod();
    struct period difference = periodsDifference(period1, period2);
    printf("Difference is:\n" 
    "%d centuries, %d years, %d months, %d days, %d minutes and %d seconds.\n",
    difference.centuries, difference.years, difference.months, difference.days, difference.minutes, difference.seconds);
    return 0;
}

struct period fillPeriod(){
    struct period period;
    printf("Enter centuries: "); scanf("%d", &period.centuries);
    printf("Enter years: "); scanf("%d", &period.years);
    printf("Enter months: "); scanf("%d", &period.months);
    printf("Enter days: "); scanf("%d", &period.days);
    printf("Enter minutes: ");scanf("%d", &period.minutes);
    printf("Enter seconds: ");scanf("%d", &period.seconds);
    
    printf("Successfully created period:\n" 
    "%d centuries, %d years, %d months, %d days, %d minutes and %d seconds.\n",
    period.centuries, period.years, period.months, period.days, period.minutes, period.seconds);

    return period;
}

struct period periodsDifference(struct period period1, struct period period2){
    struct period diff = { 0, 0, 0, 0, 0, 0};
    int leapYears = period1.years / 4;
    int months28 = period1.months / 12;
    int months30 = (period1.months * 4) / 12;
    int months31 = (period1.months * 7) / 12;
    long long int firstSum = period1.centuries * CENTURIE_SECONDS + period1.years * YEARS_SECONDS + leapYears * (LEAP_YEARS_SECONDS - YEARS_SECONDS)
    + months28 * MONTHS28_SECONDS + months30 * MONTHS30_SECONDS + months31 * MONTHS31_SECONDS + period1.days * DAYS_SECONDS + period1.minutes * MINUTES_SECONDS + period1.seconds;
    leapYears = period2.years / 4;
    months28 = period1.months / 12;
    months30 = (period1.months * 4) / 12;
    months31 = (period1.months * 7) / 12;
    long long int secondSum = period2.centuries * CENTURIE_SECONDS + period2.years * YEARS_SECONDS + leapYears * (LEAP_YEARS_SECONDS - YEARS_SECONDS) 
    + months28 * MONTHS28_SECONDS + months30 * MONTHS30_SECONDS + months31 * MONTHS31_SECONDS + period2.days * DAYS_SECONDS + period2.minutes * MINUTES_SECONDS + period2.seconds;
    long long int sum = 0;

    if(firstSum < secondSum)
        sum = secondSum - firstSum;
    else
        sum = firstSum - secondSum;

    diff.centuries = sum / CENTURIE_SECONDS;
    sum %= CENTURIE_SECONDS;
    diff.years = sum / YEARS_SECONDS;
    sum %= YEARS_SECONDS;
    diff.months = sum / MONTHS_SECONDS;
    sum %= MONTHS_SECONDS;
    diff.days = sum / DAYS_SECONDS;
    sum %= DAYS_SECONDS;
    diff.minutes = sum / MINUTES_SECONDS;
    diff.seconds = sum % MINUTES_SECONDS;

    return diff;
}