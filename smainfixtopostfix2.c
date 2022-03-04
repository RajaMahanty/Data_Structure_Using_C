#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

char arr[25];
char stack[25];
int top = -1;

void poprint()
{
	while(1)
	{
		printf("%c",stack[top]);
		if(top == -1)
		{
			break;
		}
		--top;
	}
}

void pop()
{
	if(arr[top] != '(' || arr[top] != ')')
	{
		printf("%c",arr[top]);
		--top;
	}
	else
	{
		if(arr[top] == '(')
		--top;
		else
		{
			while(1)
			{
				if(arr[top] == '(')
				{
					break;
				}
				--top;
			}
		}
	}
}

void push(char opt)
{
	++top;
	stack[top] = opt;
}

int main()
{
	int i;
	printf("Enter an infix expression >> ");
	gets(arr);
	for(i=0;i<=strlen(arr);i++)
	{
		if(arr[i] == '^')
		{
			push(arr[i]);
		}
		
		if(arr[i] == '(')
		{
			push(arr[i]);
		}
		
		if(arr[i] == ')')
		{
			pop();
		}
		
		if(arr[i]==42 || arr[i]==43 || arr[i]==45 || arr[i]==47)
		{
			if(top==-1)
			{
				top++;
				stack[top]=arr[i];
			}
			else
			{
				if((stack[top]==43 || stack[top]==45) && (arr[i]==42 || arr[i]==43 || arr[i]==45 || arr[i]==47))
				{
					top++;
					stack[top]=arr[i];
				}
				else if(stack[top]==42 || stack[top]==47 && arr[i]==43 || arr[i]==45)
				{
					printf("%c",stack[top]);
					stack[top]=arr[i];
				}
				else
				{
					top++;
					stack[top]=arr[i];
				}
			}
		}
		
		if(arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122)
		{
			printf("%c",arr[i]);
		}
		
	}
	poprint();
}
