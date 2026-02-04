#include <stdio.h>
int main()
{
	int n; 
	printf("enter the year:");
	scanf("%d",&n);
	if(n%4==0&& n%100!=0||n%400==0)
	{
		printf("year is leap year");
		
	}
	else
	{
		printf("year is not leap ");
			
	}
	return 0;
}