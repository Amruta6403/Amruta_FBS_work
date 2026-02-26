#include <stdio.h>
int main()
{
	
	int arr[10],n;
	int sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elements in the array:");
	for(int i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);	
	}
	
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
		
	}
	printf("sum of all elements in the array is %d",sum);
	return 0;
}
