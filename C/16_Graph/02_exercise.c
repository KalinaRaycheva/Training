/*
Дадена е граф. Да се намерят компонентите му на
свързаност
*/
#include <stdio.h>
#include <stdbool.h>

int adj[7][7] = /*A*/ {{0, 1, 1, 1, 0, 1, 0},
                       /*B*/ {1, 0, 0, 0, 0, 1, 0},
                       /*C*/ {1, 0, 0, 1, 0, 0, 1},
                       /*D*/ {1, 0, 1, 0, 1, 1, 1},
                       /*E*/ {0, 0, 0, 1, 0, 1, 1},
                       /*F*/ {1, 1, 0, 1, 1, 0, 0},
                       /*G*/ {0, 0, 1, 1, 1, 0, 0}};

void dfs(int start, bool visited[])
{

    if (start == 0)
    {
        printf("A - > ");
    }
    else if (start == 1)
    {
        printf("B - > ");
    }
    else if (start == 2)
    {
        printf("C - > ");
    }
    else if (start == 3)
    {
        printf("D - > ");
    }
    else if (start == 4)
    {
        printf("E - > ");
    }
    else if (start == 5)
    {
        printf("F - > ");
    }
    else if (start == 6)
    {
        printf("G - > ");
    }

    visited[start] = true;

    for (int i = 0; i < 7; i++)
    {

        if (adj[start][i] == 1 && (!visited[i]))
        {
            dfs(i, visited);
        }
    }
}

int main()
{
    bool visited[7] = {false};
    dfs(0, visited);
    printf("END");
}