//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula:
//F = (C *9/5) + 32

#include <stdio.h>
int main(){
	
	int C;
	float F;
	printf("enter the temperature in celisius:");
	scanf("%d",&C);
	F = (C *9/5) + 32;
	printf("F=%f",F);
	return 0;
}