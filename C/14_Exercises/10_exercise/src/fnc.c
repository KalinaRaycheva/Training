#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

void fillArray(int *array)
{
    printf("Enter %d numbers: ", CARD_NUMBERS);
    for (int i = 0; i < CARD_NUMBERS; i++)
        scanf(" %d", &array[i]);
}

void checkCard(int *cardNumbers)
{
    reverse(cardNumbers);
    for (int i = 1; i < CARD_NUMBERS; i += 2)
        cardNumbers[i] *= 2;

    int sum = 0;
    for (int i = 0; i < CARD_NUMBERS; i++)
    {
        if (cardNumbers[i] > 9)
        {
            sum += cardNumbers[i] / 10;
            sum += cardNumbers[i] % 10;
        }
        else
            sum += cardNumbers[i];
    }

    for (int i = 1; i < CARD_NUMBERS; i += 2)
        cardNumbers[i] /= 2;
    reverse(cardNumbers);
    if(sum % 10 == 0)
    {
        printf("Card is valid!\n");

        if(cardNumbers[0] == 4)
            printf("CC is VISA!\n");
        else if (cardNumbers[0] == 5 && (cardNumbers[1] >= 1 && cardNumbers[1] <= 5))
            printf("CC is MasterCard!\n");
        else
            printf("Nothing");
    }
    else
    {
        printf("Card isn't valid!\n");
        return;
    }
}

void reverse(int *cardNumbers)
{
    int temp = 0;
    for (int i = 0; i < CARD_NUMBERS / 2; i++)
    {
        temp = cardNumbers[i];
        cardNumbers[i] = cardNumbers[CARD_NUMBERS - i - 1];
        cardNumbers[CARD_NUMBERS - i - 1] = temp;
    }
}