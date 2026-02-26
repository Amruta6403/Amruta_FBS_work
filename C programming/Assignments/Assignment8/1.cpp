//Find minimum and maximum number in array.

#include <stdio.h>
int main()
{
	
	int arr[10]={1,2,4,6,78,9,0,4,2,6};
	int max=arr[0];
		int min=arr[0];
	for(int i=1;i<10;i++)
	{
		if (max<arr[i])

max=arr[i];
	}
	
	printf("maximum element in the array is %d\n",max);
	
	
	for(int i=1;i<10;i++)
	{
		if (min>arr[i])

min=arr[i];
	}
	
	printf("maximum element in the array is %d",min);
	
	
	}