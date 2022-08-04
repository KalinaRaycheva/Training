
/*
#include <stdio.h>
#include <stdlib.h>
#define bool int

typedef struct node
{
    char data;
    struct node *next;
} node;

void push(struct node **top_ref, int new_data);
int pop(struct node **top_ref);

bool isMatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '{' && character2 == '}')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}

bool areBracketsClose(char exp[])
{
    int i = 0;
    node *stack = NULL;
    while (exp[i])
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);

        if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {
            if (stack == NULL)
                return 0;
            else if (!isMatchingPair(pop(&stack), exp[i]))
                return 0;
        }
        i++;
    }

    if (stack == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    char exp[100] = "{()}[]";

    if (areBracketsClose(exp))
        printf("True \n");
    else
        printf("False \n");
    return 0;
}

void push(struct node **ref, int new_data)
{
    node *new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("error");
        getchar();
        exit(0);
    }
    new_node->data = new_data;
    new_node->next = (*ref);
    (*ref) = new_node;
}

int pop(struct node **ref)
{
    char res;
    node *top;
    if (*ref == NULL)
    {
        printf("error");
        getchar();
        exit(0);
    }
    else
    {
        top = *ref;
        res = top->data;
        *ref = top->next;
        free(top);
        return res;
    }
}
.......................................................
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
    signal(SIGINT, SIG_IGN);

    for (int i = 1;; i++)
    {
        printf("%d: Inside main function\n", i);
        sleep(1);
    }
    return 0;
}
.......................................................
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main()
{
    signal(SIGINT, SIG_IGN);

    for (int i = 1;; i++)
    {
        printf("%d: Inside main function\n", i);
        sleep(1);
    }
    return 0;
}
..............................
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signum)
{
    printf("Inside handler function\n");
}

int main()
{
    signal(SIGINT, sig_handler);

    for (int i = 1;; i++)
    {
        printf("%d: Inside main function\n", i);
        sleep(1);
    }
    return 0;
}
............................................
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int b = 0;
    int c;
    if(b == 0)
    {
        fprintf(stderr, "Zero can not be a divisor...\n");
        exit(-1);
        //exit(EXIT_FAILURE);

    }
    c = a/b;
    fprintf(stderr, "The result of the division is %d\n", c);
    exit(0);
}
.......................................................
#include <stdio.h>
#include <string.h>
#include <errno.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("unexisting.txt", "r");
    if(NULL == fp)
    {
        perror("ERR: ");
        //printf("\nerrno: %d : %s\n", errno, strerror(errno));
    }
    else
    {
        fclose(fp);
    }
    return 0;
}
.....................................................
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode
{
    int age;
    char *name;
    char *lastName;
    struct queueNode *next;
} ListNode;

ListNode *front = NULL;
ListNode *end = NULL;

void addList();

int main()
{
    for (int i = 0; i < 5; i++)
    {
        addList();
    }
    print();
    freeTheList();
    return 0;
}

void enqueue()
{
    ListNode *addNode = (ListNode *)malloc(sizeof(ListNode));
    char name[200];
    char lastName[200];
    int age;

    printf("Enter runner name -");
    scanf("%s", name);
    addNode->name = (char *)malloc(sizeof(char) * (strlen(name)+1));
    strcpy(addNode->name, name);


    addNode->lastName = (char *)malloc(sizeof(char) * (strlen(lastName)+1));
    printf("Enter runner last name -");
    scanf("%s", lastName);
    addNode->lastName = (char *)malloc(sizeof(char) * (strlen(lastName)+1));
    strcpy(addNode->lastName, lastName);

    printf("Enter age -");
    scanf("%d", &age);
    addNode->age = age;
    addNode->next = NULL;

    if (front == NULL)
    {
        front = addNode;
        end = addNode;
        return;
    }
    end->next = addNode;
    end = addNode;
}

void print()
{
    ListNode *temp = front;
    while(temp!=NULL)
    {
        printf("Name: %s, LastName: %s, Age: %d\n", temp->name, temp->lastName, temp->age);
        temp = temp->next;
    }
}

void freeTheList()
{
    ListNode *temp = front;
    ListNode *removeTemp;
    while(*temp != NULL)
    {
        free(temp->name);
        free(temp->lastName);
        removeTemp = temp;
        temp = temp->next;
        free(removeTemp);
    }
}
...................................................................................
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    int elements_count = 0;
    printf("Enter element's count: "); scanf("%d", &elements_count);
    int *nums = (int *)malloc(elements_count * sizeof(nums));
    int current = 0;
    srand(time(NULL));
    for (int i = 0; i < elements_count; i++)
    {
        nums[i] = rand() % 10 + 1;
    }

    for (int i = 0; i < elements_count; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\nEnter the new element's count: "); scanf("%d", &elements_count);
    nums = (int *)realloc(nums, elements_count * sizeof(nums));
    for (int i = 0; i < elements_count; i++)
    {
        nums[i] = rand() % 10 + 1;
    }

    for (int i = 0; i < elements_count; i++)
    {
        printf("%d ", nums[i]);
    }

    free(nums);
    return 0;
}
............................................................
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 2;
    char *buffer = (char *)malloc(size * sizeof(buffer));
    int i = 0;
    // char *new_buffer;
    while ((buffer[i] = getchar()) != '\n')
    {
        if (i == (size - 1))
        {
            size *= 2;
            buffer = (char *)realloc(buffer, sizeof(int) * 2);
        }
        printf("Enter symbol -");
        i++;
    }

    for (int k = 0; k < i; k++)
    {
        printf("%c", buffer[k]);
    }

    free(buffer);
    return 0;
}
............................................................
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int elements_count = 0;
    printf("Enter element's count: "); scanf("%d", &elements_count);
    int *nums = (int*)malloc(elements_count * sizeof(nums));
    int current = 0;
    int sum = 0;
    for(int i = 0; i < elements_count; i++)
    {
        printf("Enter current element - "); scanf("%d", &current);
        nums[i] = current;
        sum += nums[i];
    }
    printf("The sum of all is - %d", sum);
    free(nums);
    return 0;
}

*/