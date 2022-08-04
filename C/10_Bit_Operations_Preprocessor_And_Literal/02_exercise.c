/*
9) Направете на нула битовете в числа, намиращи се на
позиции между 3 и 7.
*/

#include <stdio.h>
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 
  
void diapason(int num);

int main(){ 
    int number = 255; //11111111
    diapason(number);
    return 0;
}

void diapason(int num){
    int mask = 199; //11000111
    num = num & mask;
    printf("%c%c%c%c%c%c%c%c", BYTE_TO_BINARY(num));
}

/*
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c" 

printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(num));
For multi-byte types:
printf("m: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
  BYTE_TO_BINARY(m>>8), BYTE_TO_BINARY(m));
*/