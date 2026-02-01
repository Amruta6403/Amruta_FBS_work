//Write a C program to swap two numbers using a temporary third variable.
#include <stdio.h>
int main(){
	int a,b,temp;
	printf("enter the number a:");
	scanf("%d",&a);
	
	printf("enter the number b:");
	scanf("%d",&b);
	
	
temp=a;
a=b;
b=temp;
printf("numbers after swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
return 0;


}