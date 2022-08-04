#include "fnc.h"

int getMax(int *arr, int size)
{
    static int max = INT_MIN;
    static int cnt = 0;
    if (max <= arr[cnt])
    {
        max = arr[cnt];
    }
    cnt++;
    if (cnt == size)
    {
        return max;
    }
    getMax(arr, size);
}
int getMin(int *arr, int size)
{

    static int cnt = 0;
    static int min = INT_MAX;
    if (min > arr[cnt])
    {
        min = arr[cnt];
    }
    cnt++;
    if (cnt == size)
    {
        return min;
    }
    getMin(arr, size);
}
int getSum(int *arr, int size)
{
    static int sum = 0;
    static int cnt = 0;
    sum = sum + arr[cnt];
    cnt++;
    if (cnt == size)
    {
        return sum;
    }
    getSum(arr, size);
}
int getProduct(int *arr, int size)
{
    static int product = 1;
    static int cnt = 0;
    product = product*arr[cnt];
    cnt++;
    if (cnt == size)
    {
        return product;
    }
    getProduct(arr, size);
}
float getAverage(int *arr, int size){
    static float sum = 0;
    static int cnt = 0;
    sum = sum + arr[cnt];
    cnt++;
    if (cnt == size)
    {
        float av=sum/cnt;
        return av;
    }
    getAverage(arr, size);
}