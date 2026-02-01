//Write a C program to add two integers and display the result
#include <stdio.h>
int main()
{
	int num1,num2,sum;
	printf("\nenter the num1 for sum:");
	scanf("%d",&num1);
	
	printf("\nenter the num2 for sum:");
	scanf("%d",&num2);
	sum=num1+num2;
	printf("\nsum=%d",sum);
	return 0;
	
}