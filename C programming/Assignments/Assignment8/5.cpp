#include <stdio.h>
int main()
{
	int arr[10],n,i;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the all elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("alternate elements in the array");
	
	for(i=0;i<n;i=i+2)
	{
		
		printf(" %d",arr[i]);
	}
	return 0;
}