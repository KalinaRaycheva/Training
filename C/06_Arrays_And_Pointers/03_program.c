#include <stdio.h>
#define SIZE 10 // Maximum array size
int main()
{
int arr[SIZE]; // Declare an array of size 10
int *ptr = arr; // Pointer to first element of integer array
int i = 0;
/* Input number from user in array */
printf("Enter %d array elements: ", SIZE);
while(ptr < &arr[SIZE])
{
// Input in array using pointer
scanf("%d", ptr);
// Move pointer to next array element
ptr++;
}
// Make sure pointer point back to 0th element
ptr = arr;
// Print all elements using pointer
printf("Elements in array are: ");
for(i=0; i < SIZE; i++)
{
printf("%d, ", *(ptr + i));
}
return 0;
}
