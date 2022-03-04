#include <stdio.h>

int arr[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
int size=sizeof(arr)/sizeof(arr[0]);

void linearsearch()
{
	int i,temp,flag=0;
	printf("Enter the number you want to search >>> ");
	scanf("%d",&temp);
	for(i=0;i<size;i++)
	{
		if(temp == arr[i])
		{
			flag = 1;
		}
	}
	if(flag == 1)
	printf("Data found!");
	else
	printf("Data not found!");
}

int main()
{
	linearsearch();
	return 0;
}
