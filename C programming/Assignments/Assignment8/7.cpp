#include <stdio.h>
int main()
{
	
	int arr[20],brr[30],crr[60],i,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements of first array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
		printf("enter the elements of second array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&brr[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		
		crr[i]=arr[i]+brr[i];
	}
	printf("addition of two arrays element");
	for(i=0;i<n;i++)
	{
		
		printf(" %d",crr[i]);
	}
	return 0;
	
}