/*
Задача 2. Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница - име, поздрав, брой. Отворете файла с
текстов редактор, за да се убедите, че данните са записани.
*/

#include <stdio.h>

int main()
{
    char str[20];

    fgets(str, 20, stdin);
    puts(str);

    FILE *f = fopen("02_exercise.txt", "r");
    if (f == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    else
    {
        fgets(str, 20, f);
        puts(str);
    }

    fclose(f); 

    // if(str == "Something"){
    //     printf("Data are the same");
    // }else{
    //     printf("Data are not the same");
    // }

    return (0);
}