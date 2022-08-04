/*Задача 8. Направете структура struct rect, която съдържа в
себе си две точки. Създайте обект от тип тази структура наречен
screen. Използвайте функцията makepoint за да зададете начална точка
на екрана (0, 0) и крайна точка (15, 15). Запълнете пространството
между тях с тирета.*/

#include <stdio.h>
#include <stdlib.h>

#define SCREEN_START_X 0
#define SCREEN_START_Y 0
#define SCREEN_END_X 15
#define SCREEN_END_Y 15

struct point{
    int x;
    int y;
};

struct rect{
    struct point startPoint;
    struct point endPoint;
};

void makeRect(struct rect *rect);
struct point makePoint(int x, int y);
void fillFree(struct rect rect);

int main(){
    struct rect screen; 
    makeRect(&screen);
    fillFree(screen);
    return 0;
}

void makeRect(struct rect *rect){
    rect->startPoint = makePoint(SCREEN_START_X, SCREEN_START_Y);
    rect->endPoint = makePoint(SCREEN_END_X, SCREEN_END_Y);
}

struct point makePoint(int x, int y){
    struct point newPoint;
    newPoint.x = x;
    newPoint.y = y; 
    return newPoint;
}

void fillFree(struct rect rect){
    for (int i = rect.startPoint.x; i < rect.endPoint.x; i++){
        for (int j = rect.startPoint.y; j < rect.endPoint.y; j++)
            printf("-");
        printf("\n");
    }
}