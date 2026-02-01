//Write a C program to find the area of a circle.
#include <stdio.h>
int main()
{
	int radius;
	float area;
	printf("enter the radius:");
	scanf("%d",&radius);
	area=3.14*radius*radius;
	
	printf("area=%f",area);
	return 0;
}