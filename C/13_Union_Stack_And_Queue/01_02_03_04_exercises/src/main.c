/*
1.Напишете функция, с която да разделите даден едносвързан свързан списък от цели числа, в
два списъка по следния начин.
Ако първоначалният списък е L = (l0, l1, ….., ln), то
новополучените списъци мжгот до са R1 = (l0, l2, l4, …..) и R2 = (l1, l3, l5, …..).

2. Напишете функция, с която да вмъкнете възел „t“ преди възел, посочен с „X“ в
единичен свързан списък „L“.

3. Напишете функция, с която да да изтриете възел, посочен с „p“ от едносвързан списък „L“.

4. Да предположим, че подреден списък L = (l0, l1, …..,ln) е представен от единичен свързан
списък. Добавете списъка L = (ln, l0, l1, ….., ln) след друг подреден списък M, представен от
единично свързан списък
*/

#include "listfnc.h"

int main()
{
    node *L = initiateNode();
    fillNodeValues(L);
    menuOpen(L);
    return 0;
}