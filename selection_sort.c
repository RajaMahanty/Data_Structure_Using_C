#include <stdio.h>

int Selectionsort(int arr[],int size)
{
	int i,j,min,temp,k;
	for(i=0;i<(size-1);i++)
	{
		min = i;
		for(j=i+1;j<size;j++)
		{
			if(arr[j] < arr[min])
			min = j;
		}
		if(min != i){
			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	for(k=0;k<size;k++)
	printf("%d	",arr[k]);
}

int main()
{
	int arr[]={5,4,3,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	Selectionsort(arr,size);
	return 0;
}
