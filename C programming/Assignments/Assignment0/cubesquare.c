//Write a C program to find the square and cube of a given number.

#include <stdio.h>
int main()
{
	
	int n,square,cube;
	printf("enter the number of n:");
	scanf("%d",&n);
	square=n*n;
	cube=n*n*n;
	printf("\nsquare=%d",square);
	printf("\nsquare=%d",cube);
	return 0;
}