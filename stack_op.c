#include<stdio.h>
#include<string.h>
int top=-1;
int main()
{
	char arr[10];
	int i;
	char stack[10];
	printf("enter:");
	gets(arr);
	for(i=0;i<=strlen(arr);i++)
	{
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
	}
	strrev(stack);
	for(i=0;i<=strlen(stack);i++)
	{
		printf("%c",stack[i]);
	}
}
