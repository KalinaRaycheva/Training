#include "task6.h"
int getMaxArray(unsigned int *arr, int N, int K)
{
    int count = 0;
    int sum = 0;
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            sum = sum + arr[j];
            if (sum % K == 0)
            {
                count = j;
            }
        }
        for (int p = 0; p < N - 1; p++)
        {
            arr[p] = arr[p + 1];
        }
        N--;
        if (count > max)
        {
            max = count;
        }
        count=0;
        sum=0;
    }

    return max+1;
}