/*
Задача 9. Представете служителите във фирма в
структура с членове: пореден номер, име, презиме, фамилия, позиция,
трудов стаж в години, заплата в лева, указател към структурата, описващ
неговия началник. Напишете програма, която въвежда 10 служителя, които
се съхраняват в масив от описаните структури. След като въведете всички
служители, задайте началник за всеки от тях. В решението трябва да се
използва динамично заделяне на памет и typedef.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define EMPLOYEES 10
typedef struct employee employee_t;

struct employee{
    int id;
    char *name;
    char *middle_name;
    char *surname;
    char *position;
    int experience;
    float salary;
    employee_t *boss;
};

void readEmployees(struct employee *employees);
void readBoss(struct employee *employees);
void strCopyToEmployee(char *from, char **to);
void freeEmployees(struct employee *employees);


int main(){
    struct employee employees[EMPLOYEES];
    readEmployees(employees);
    readBoss(employees);
    freeEmployees(employees);
}

void readEmployees(struct employee *employees){
    for (int i = 0; i < EMPLOYEES; i++){
        char temp[20];
        employees[i].id = i;

        printf("Enter the name of the %dst employee: ", i+1); scanf("%s", temp);
        strCopyToEmployee(temp, &employees[i].name);
        printf("Enter the middle name of the employee: "); scanf("%s", temp);
        strCopyToEmployee(temp, &employees[i].middle_name);
        printf("Enter the surname of the employee: "); scanf("%s", temp);
        strCopyToEmployee(temp, &employees[i].surname);
        printf("Enter the position of the employee: "); scanf("%s", temp);
        strCopyToEmployee(temp, &employees[i].position);
        printf("Enter the experience of the employee: "); scanf("%d", &employees[i].experience);
        printf("Enter the salary of the employee: "); scanf("%f", &employees[i].salary);

        employees[i].boss = NULL;
        printf("You added the %dst employee:\n"
               "Name: %s %s %s, Position: %s, Experience: %d years, Salary: %.2f\n", 
               i+1, employees[i].name, employees[i].middle_name, employees[i].surname, employees[i].position, employees[i].experience, employees[i].salary);
    }
}

void readBoss(struct employee *employees){
    int id = -1;
    for (int i = 0; i < EMPLOYEES; i++){
        printf("Enter the boss id of the %dst employee: ", i+1); scanf("%d", &id);
        id -= 1;
        employees[i].boss = &employees[id];
        printf("%s %s's new boss is %s %s.\n", employees[i].name, employees[i].surname, employees[id].name, employees[id].surname);
    }
}

void strCopyToEmployee(char *from, char **to){
    int size = 10, i = 0;
    char *temp = (char*)malloc(size);
    for(i = 0; from[i] != '\0'; i++){
        if(i == size - 1){
            size *= 2;
            temp = (char*)realloc(temp, size);
            temp[i] = from[i];
        }else{
            temp[i] = from[i];
        }
    }
    temp[i+1] = '\0';
    *to = temp;
}

void freeEmployees(struct employee *employees){
    for(int i = 0; i < EMPLOYEES; i++){
        free(employees[i].name);
        free(employees[i].middle_name);
        free(employees[i].surname);
        free(employees[i].position);
    }
}