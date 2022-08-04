/*
Задача 3. Домашно 
Създайте структура диня с два елемента - диаметър и
дебелина на кората заделете динамично с malloc() за масив от А на брой
дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората
между 0.5 и 3.5 см. Създайте структура диня с два елемента - диаметър и
дебелина на кората заделете динамично с malloc() за масив от В на брой
дини от сорт пъмпкин и попълнете данните за диаметър между 35 и 95 см с
функцията rand(), за всяка една диня в масива и дебелина на кората
между 0.3 и 0.9 см. Намерете средната големина на динята и средната
дебелина на кората и ги съпоставете с тези от втория масив. Изведете на
екрана купчината от кой сорт е по добре да се купи.
Изход: По-добре е да се купят ... дини с диаметър ... сантиметра и кора
с дебелина D см вместо ... дини с диаметър ... см и дебелина на кората
D1 см.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Melons range
#define MELONS_DIAMETER_MIN 15
#define MELONS_DIAMETER_MAX 140
#define MELONS_PEEL_MIN 0.5
#define MELONS_PEEL_MAX 3.5
// Pumkins range
#define PUMPKINS_DIAMETER_MIN 35
#define PUMPKINS_DIAMETER_MAX 95
#define PUMPKINS_PEEL_MIN 0.3
#define PUMPKINS_PEEL_MAX 0.9

struct watermelon{
    int diameter;
    float thickness;
};

void getWatermelon(struct watermelon *array, int count, int diameter_min, int diameter_max, float peel_min, float peel_max);
float getAverageDiameter(struct watermelon *array, int size);
float getAveragePeel(struct watermelon *array, int size);
bool isBetter(float firstDiameter, float firstThickness, float secondDiameter, float secondThickness);

int main(){
    int A = 0;//count Melon
    printf("Enter count of watermelon (sort Melon): "), scanf("%d", &A);
    struct watermelon *melons = (struct watermelon*)malloc(sizeof(struct watermelon) * A);
    getWatermelon(melons, A, MELONS_DIAMETER_MIN, MELONS_DIAMETER_MAX, MELONS_PEEL_MIN, MELONS_PEEL_MAX);
    float melons_diameter = getAverageDiameter(melons, A);
    float melons_peel = getAveragePeel(melons, A);

    int B = 0;//count Pumpkin
    printf("Enter count of watermelon (sort Pumpkins): "), scanf("%d", &B);
    struct watermelon *pumpkins = (struct watermelon*)malloc(sizeof(struct watermelon) * B);
    getWatermelon(pumpkins, B, PUMPKINS_DIAMETER_MIN, PUMPKINS_DIAMETER_MAX, PUMPKINS_PEEL_MIN, PUMPKINS_PEEL_MAX);
    float pumpkins_diameter = getAverageDiameter(pumpkins, B);
    float pumpkins_peel = getAveragePeel(pumpkins, B);

    if(isBetter(melons_diameter, melons_peel, pumpkins_diameter, pumpkins_peel)){
        printf("It's better to buy Melons watermelons with a diameter of %.2f centimeters and a peel with a thickness of %.2f cm instead of "
               "Pumpkins watermelons with a diameter of %.2f cm and peel thickness %.2f cm.",
               melons_diameter, melons_peel, pumpkins_diameter, pumpkins_peel);
    }else{
         printf("It's better to buy Pumpkins watermelons with a diameter of %.2f centimeters and a peel with a thickness of %.2f cm instead of "
               "Melons watermelons with a diameter of %.2f cm and peel thickness %.2f cm.",
               pumpkins_diameter, pumpkins_peel, melons_diameter, melons_peel);
    }
    return 0;
}

void getWatermelon(struct watermelon *array, int count, int diameter_min, int diameter_max, float peel_min, float peel_max){
    for(int i = 0; i < count; i++){
        array[i].diameter = rand() % (diameter_max - diameter_min) + diameter_min;
        array[i].thickness = ((float)rand()/(float)(RAND_MAX)) * (peel_max - peel_min) + peel_min;
    }
}

float getAverageDiameter(struct watermelon *array, int size){
    float average = 0;
    for (int i = 0; i < size; i++)
        average += array[i].diameter;
    
    return average /= size;
}

float getAveragePeel(struct watermelon *array, int size){
    float average = 0;
    for (int i = 0; i < size; i++)
        average += array[i].thickness;
    
    return average /= size;
}

bool isBetter(float firstDiameter, float firstThickness, float secondDiameter, float secondThickness)
{
    float percent = firstThickness * 100 / firstDiameter;
    if(percent < secondThickness * 100 / secondDiameter)
        return true;
    else
        return false;
}
