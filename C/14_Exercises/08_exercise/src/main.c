/*
8. Времето се задава във 12-часов формат AM или PM. Напишете функция, която по зададено
време в такъв формат го конвертира във 24 -часов формат.
9. Note: - 12:00:00AM в 12-часов формат е 00:00:00 в 24-часов формат.
- 12:00:00PM в 12-часов формат е 12:00:00 в 24-часов формат.
Пример
● s = '12 : 01: 00PM'
8. Return '12:01:00'.
● s = '12 : 01: 00AM'
9. Return '00:01:00'.
*/
#include "..\include\fnc.h"

int main()
{
    char string[255];
    printf("Enter the time: ");
    gets(string);
    convertHours(string);
	return (0);
}