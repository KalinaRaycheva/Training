/*
22. Да се напише функция, която намира и отпечатва лицето на кръг.
*/

#include <stdio.h>
#include <math.h>

double circleArea();

int main(){
    double radius = 0;
    printf("Enter the radius - ");
    scanf("%lf", &radius);
    
    printf("The area of circle is %lf.", circleArea(radius));
    return 0;
}

double circleArea(double radius){
    return M_PI * pow(radius, 2);
}
