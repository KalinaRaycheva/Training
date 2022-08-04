#include <stdio.h>

int main() {

   int year;
   printf("Enter the year - ");
   scanf("%d", &year);

   int leap_years, leap_days, leap_hours,  leap_seconds;
   leap_years = year / 4;
   leap_days = leap_years * 366;
   leap_hours = leap_days * 24;
   leap_seconds = leap_hours * 60;

   int ordinary_years, ordinary_days, ordinary_hours, ordinary_seconds;
   ordinary_years = year - leap_years;
   ordinary_days = ordinary_years * 365;
   ordinary_hours = ordinary_days * 24;
   ordinary_seconds = ordinary_hours * 60;

   int seconds = leap_seconds + ordinary_seconds;
   printf("In %d year there are %d seconds.", year, seconds);

   return 0;
}