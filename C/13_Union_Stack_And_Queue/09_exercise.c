/*
9. Като използвате стек, напишете програма, която проверява
дали в едни аритметичен израз, записан чрез стринг, на всяка
отваряща скоба отговаря затваряща. Проверете за трите вида
скоби ( ), [ ], { } .
*/

#include <stdio.h>
typedef struct stackNode
{
    char data;
    struct stackNode *prev;
} stackNode;

typedef struct Stack
{
    struct stackNode *top;
} Stack;

Stack *initStack();
void push(Stack *currentStack, char data);
void pop(Stack *currentStack);
void checkExpression(Stack *stack);

int main()
{
	char c;
	Stack *expression = initStack();
	printf("Enter an arithmetic expression: ");
	while((c = getchar()) != '\n')
		push(expression, c);
	checkExpression(expression);

    return 0;
}


Stack *initStack()
{
    Stack *currentNode = (Stack *)malloc(sizeof(Stack));
    currentNode->top = NULL;

    return currentNode;
}

void push(Stack *currentStack, char data)
{
    struct stackNode *tmp = (stackNode *)malloc(sizeof(stackNode));
    tmp->data = data;
    if (currentStack->top == NULL)
    {
        currentStack->top = tmp;
        tmp->prev = NULL;

        return;
    }
    tmp->prev = currentStack->top;
    currentStack->top = tmp;
}

void pop(Stack *currentStack)
{
    struct stackNode *tmp = currentStack->top;
    if (currentStack == NULL)
    {
        printf("The stack is empty");
        return;
    }
    currentStack->top = tmp->prev;
    free(tmp);
}

void display(struct Stack *currentStack)
{
    struct stackNode *tmp = currentStack->top;
    while (tmp != NULL)
    {
        printf("%c ", tmp->data);
        tmp = tmp->prev;
    }
    printf("\n");
}

void checkExpression(Stack *stack)
{
	int openBrackets = 0, closeBrackets = 0;
	int openStraightBrackets = 0, closeStraightBrackets = 0;
	int openCurlyBrackets = 0, closeCurlyBrackets = 0;
	for (stackNode *temp = stack->top; temp != NULL; temp = temp->prev)
	{
		switch (temp->data)
		{
		case '(':
			openBrackets++;
			break;

		case ')':
			closeBrackets++;
			break;
		
		case '[':
			openStraightBrackets++;
			break;
		
		case ']':
			closeStraightBrackets++;
			break;
		
		case '{':
			openCurlyBrackets++;
			break;
		
		case '}':
			closeCurlyBrackets++;
			break;
		}	
	}

	if (openBrackets != closeBrackets || openCurlyBrackets != closeCurlyBrackets || openStraightBrackets != closeStraightBrackets)
		printf("Missing brackets!");
	else
		printf("No brackets missing!");
	
}