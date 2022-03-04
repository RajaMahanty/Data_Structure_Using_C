#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 50

char arr[50];
int top = -1;
char push(char);
char pop();
char stack[N];
int isEmpty();
int isFull();

int main()
{
	int i;
	printf("Enter an infix expression >> ");
	gets(arr);
	for(i=0;i<=strlen(arr);i++)
	{
		if(arr[i] == '(')
		{
			push(arr[i]);
		}
		if(arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122)
		{
			printf("%c",arr[i]);
		}
		if(arr[i] == ')')
		{
			while(1)
			{
				if(stack[top] == '(')
				break;
				printf("%c",--arr[i]);
				pop();
			}
		}
		if(arr[i] == '+')
		{
			if(top == -1)
				push(arr[i]);
			else
			{
				if(stack[top] == '-' || stack[top] == '+' || stack[top] == '(' || stack[top] == ')')
				push(arr[i]);
				else
				{
					while(1)
					{
						if(stack[top] == '-' || stack[top] == '+' || stack[top] == '(' || stack[top] == ')')
						break;
						printf("%c",stack[i]);
						pop();
					}
				}
			}
		}
		if(arr[i] == '-')
		{
			if(top == -1)
				push(arr[i]);
			else
			{
				if(stack[top] == '-' || stack[top] == '+' || stack[top] == '(' || stack[top] == ')')
				push(arr[i]);
				else
				{
					while(1)
					{
						if(stack[top] == '-' || stack[top] == '+' || stack[top] == '(' || stack[top] == ')')
						break;
						printf("%c",stack[i]);
						pop();
					}
				}
			}
		}
		if(arr[i] == '*')
		{
			if(top == -1)
				push(arr[i]);
			else
			{
				if(stack[top] == '-' || stack[top] == '+' || stack[top] == '(' || stack[top] == ')' || stack[top] == '*' || stack[top] == '/' || stack[top] == ')')
				push(arr[i]);
				else
				{
					while(1)
					{
						if(stack[top] == '^')
						break;
						printf("%c",stack[i]);
						pop();
					}
				}
			}
		}
		if(arr[i] == '/')
		{
			if(top == -1)
				push(arr[i]);
			else
			{
				if(stack[top] == '-' || stack[top] == '+' || stack[top] == '(' || stack[top] == ')' || stack[top] == '*' || stack[top] == '/' || stack[top] == ')')
				push(arr[i]);
				else
				{
					while(1)
					{
						if(stack[top] == '^')
						break;
						printf("%c",stack[i]);
						pop();
					}
				}
			}
		}
		if(arr[i] == '%')
		{
			if(top == -1)
				push(arr[i]);
			else
			{
				if(stack[top] == '-' || stack[top] == '+' || stack[top] == '(' || stack[top] == ')' || stack[top] == '*' || stack[top] == '/' || stack[top] == ')')
				push(arr[i]);
				else
				{
					while(1)
					{
						if(stack[top] == '^')
						break;
						printf("%c",stack[i]);
						pop();
					}
				}
			}
		}
		if(arr[i] == '^')
		{
			push(arr[i]);
		}
	}
	return 0;
}

char push(char ele)
{
	if (isFull())
		printf("Stack Overflow!\n");
	else
	{
		++top;
		stack[top] = ele;
	}
}

char pop()
{
	if (isEmpty())
		printf("Stack Underflow!");
	else
		--top;
	return 0;
}

int isEmpty()
{
	if (top == -1)
		return 1;
	return 0;
}

int isFull()
{
	if (top == N - 1)
		return 1;
	return 0;
}
