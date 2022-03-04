#include <stdio.h>

int Bubblesort(int arr[],int size)
{
	int i,j,temp,k;
	for(i=0;i<(size-1);i++)
	{
		for(j = 0;j<(size-1-i);j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(k=0;k<size;k++)
	printf("%d	",arr[k]);
}

int main()
{
	int arr[]={5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	Bubblesort(arr,size);
	return 0;
}
