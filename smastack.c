#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 5
int top = -1;
int isFull();
int isEmpty();
int push();
int pop();
int peek();
int display();
int stack[N];

int main()
{
	int ch, ele;
	while (1)
	{
		printf("\nPress 1 for push\n");
		printf("Press 2 for pop\n");
		printf("Press 3 for peek\n");
		printf("Press 4 for display\n");
		printf("Press 5 for exit\n\n");
		printf("\nEnter option >> ");
		scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("Enter value you want to push >> ");
			scanf("%d", &ele);
			push(ele);
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		case 4:
			display();
			break;
		case 5:
			exit(0);
		default:
			printf("\nEnter a valid option!");
			exit(-1);
			break;
		}
	}
	return 0;
}

int display()
{
	int i;
	for (i = 0; i <= top; i++)
	{
		printf("%d	", stack[i]);
	}
}

int peek()
{
	printf("The top elemet is %d\n", stack[top]);
}

int isFull()
{
	if (top == N - 1)
		return 1;
	return 0;
}

int isEmpty()
{
	if (top == -1)
		return 1;
	return 0;
}

int push(int ele)
{
	if (isFull())
		printf("Stack Overflow!\n");
	else
	{
		++top;
		stack[top] = ele;
	}
}

int pop()
{
	if (isEmpty())
		printf("Stack Underflow!");
	else
	{
		printf("Poped item is %d", stack[top]);
		--top;
	}
	return 0;
}
