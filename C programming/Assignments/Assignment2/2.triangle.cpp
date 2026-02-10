//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the all three sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c){
		printf("given triagle is equilateral");
		
	}
	else if(a==b||b==c||a==c){
		printf("given triangle is isosceles");}
		else
		{
			printf("given triangle is scalene");
		}
	
	
}