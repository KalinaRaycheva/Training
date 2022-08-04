#include "..\include\fnc.h"

int Ackermann(const int m, const int n)
{
    if (m == 0)
    {
        return n + 1;
    }
    else if (n == 0)
    {
        return Ackermann(m-1, 1);
    }
    else
    {
        return Ackermann(m-1, Ackermann(m, n-1));
    }
}