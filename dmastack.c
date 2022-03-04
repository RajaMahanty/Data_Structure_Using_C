#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int i;
int * ptr;
int top = -1;
int isFull();
int isEmpty();
int push(int);
int pop();
int peek();
int display();

int main()
{
	int ch, ele;
	printf("Enter memory size >> ");
	scanf("%d",&i);
	ptr = (int*)calloc(i,sizeof(int));
	
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
	free(ptr);
	return 0;
}

int display()
{
	int i;
	for (i = 0; i <= top; i++)
	{
		printf("%d	", *(ptr+i));
	}
}

int peek()
{
	printf("The top elemet is %d\n", *(ptr+top));
}

int isFull()
{
	if (top == i - 1)
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
		*(ptr+top) = ele;
	}
}

int pop()
{
	if (isEmpty())
		printf("Stack Underflow!");
	else
	{
		printf("Poped item is %d", *(ptr+top));
		--top;
	}
	return 0;
}
