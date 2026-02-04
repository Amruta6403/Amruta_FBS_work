//Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
int main()
{
	int num,original,reversed=0,digit;
	printf("enter the three digit number:");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		digit=num%10;
		reversed=reversed*10+digit;
		num=num/10;
	}
	if(original==reversed)
	{
		printf("the number is palindrome");
		
	}
	else
	{
		printf("the number is not palindrome");
	}
	return 0;
}