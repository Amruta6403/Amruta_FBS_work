//Write a C program to input five numbers and find their average.

#include <stdio.h>
int main(){
	
	int a,n;
	int sum=0;
	float average;
	printf("enter the value of n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		scanf("%d",&a);
//			printf("\na=%d",a);
sum=sum+a;
	}

average=sum/5;
printf("average=%f",average);
}