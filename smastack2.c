#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define N 5

int stack[N];
int top = -1;

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

void display()
{
	int i;
	for (i = 0; i <= top; i++)
		printf("%d\t", stack[i]);
}

void pop()
{
	if (isEmpty())
		printf("Stack Underflow !");
	else
	{
		printf("Poped item is %d", stack[top]);
		--top;
	}
}

void push(int ele)
{
	if (isFull())
		printf("Stack Overflow !");
	else
	{
		++top;
		stack[top] = ele;
	}
}

void peek()
{
	printf("\nThe top item is %d", stack[top]);
}

int main()
{
	int temp, num;
	while (1)
	{
		printf("\npress 1 for push");
		printf("\npress 2 for pop");
		printf("\npress 3 for display");
		printf("\npress 4 for peek");
		printf("\npress 5 for clearing the screen");
		printf("\npress 6 for exit\n\n>>>  ");
		scanf("%d", &temp);
		switch (temp)
		{
		case 1:
			printf("\nEnter the number you want to push >>>  ");
			scanf("%d", &num);
			push(num);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			peek();
			break;
		case 5:
			system("cls");
			break;
		case 6:
			exit(0);
		default:
			printf("Enter an valid option!");
			exit(-1);
		}
	}
}
