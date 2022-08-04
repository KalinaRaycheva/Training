#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define N 4
#define M 6

typedef struct IandJ
{
    int i;
    int j;
} IandJ;

typedef struct Queue
{
    IandJ iAndJ;
    struct Queue *next;
} Queue;

extern Queue *front, *rear;
void init();
void enQueue(IandJ source);
IandJ deQueue();
void printQueue();





void init()
{
    front = NULL;
    rear = NULL;
}

void enQueue(IandJ source)
{
    Queue *node = (Queue *)malloc(sizeof(Queue));
    node->iAndJ = source;
    node->next = NULL;
    if (front == NULL)
    {
        front = node;
        rear = node;
        return;
    }
    rear->next = node;
    rear = node;
}

IandJ deQueue()
{
    if (front == NULL)
    {
        printf("The queue is empty !");
        exit(0);
    }
    IandJ p = front->iAndJ;
    Queue *temp = front;
    front = front->next;
    free(temp);
    return p;
}

void printQueue()
{
    Queue *temp = front;
    while (temp != NULL)
    {
        printf("%d , %d : ", temp->iAndJ.i, temp->iAndJ.j);
        temp = temp->next;
    }
}





Queue *front, *rear;

void minDistance(char grid[N][M])
{
    IandJ source;
    source.i = 0;
    source.j = 0;

    bool visited[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (grid[i][j] == '#')
                visited[i][j] = true;
            else
                visited[i][j] = false;

            if (grid[i][j] == 's')
            {
                source.i = i;
                source.j = j;
            }
        }
    }

    enQueue(source);
    visited[source.i][source.j] = true;
    printQueue();
    while (front != NULL)
    {
        IandJ p = deQueue();

        if (grid[p.i][p.j] == 'e')
        {
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    printf("%c", grid[i][j]);
                }
                printf("\n");
            }
            break;
        }

        // moving up
        if (p.i - 1 >= 0 && visited[p.i - 1][p.j] == false)
        {
            IandJ p1;
            p1.i = p.i - 1;
            p1.j = p.j;
            enQueue(p1);
            // grid[p1.i][p1.j] = '.';
            visited[p.i - 1][p.j] = true;
        }

        // moving down
        if (p.i + 1 < N && visited[p.i + 1][p.j] == false)
        {
            IandJ p1;
            p1.i = p.i + 1;
            p1.j = p.j;
            enQueue(p1);
            // grid[p1.i][p1.j] = '.';
            visited[p.i + 1][p.j] = true;
        }

        // moving left
        if (p.j - 1 >= 0 && visited[p.i][p.j - 1] == false)
        {
            IandJ p1;
            p1.i = p.i;
            p1.j = p.j - 1;
            enQueue(p1);
            // grid[p1.i][p1.j] = '*';
            visited[p.i][p.j - 1] = true;
        }

        // moving right
        if (p.j + 1 < M && visited[p.i][p.j + 1] == false)
        {
            IandJ p1;
            p1.i = p.i;
            p1.j = p.j + 1;
            enQueue(p1);
            // grid[p1.i][p1.j] = '*';
            visited[p.i][p.j + 1] = true;
        }

        printQueue();
        printf("\n");
    }
}

int main()
{
    init();
    char grid[N][M] = {{'.', '.', '.', '#', '.', 's'},
                       {'#', '.', '.', '.', '.', '#'},
                       {'.', '.', '#', '.', '.', '.'},
                       {'e', '.', '.', '.', '#', '.'}};

    minDistance(grid);

    return 0;
}