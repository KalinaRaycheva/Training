/*
Задача 3. Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница - име, поздрав, брой. Отворете файла за
четене, като проверявате дали файла наистина е отворен. Използвайте
fgetc() , която взема само един символ от файла. Направете while цикъл,
за да изпишете всички символи, като проверявате за край на файл с EOF.
*/

#include <stdio.h>

int main()
{
    FILE *f = fopen("02_exercise.txt", "r");

    if (f == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
   
    getchar(f);
    fclose(f);
    return (0);
}

void getchar(FILE *fp)
{
    int c;
    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c ", c);
    }
}