/*Check the given number is prime or not.
Input: n = 7
Output: Prime*/
#include <stdio.h>
int main()
{
	int i,n=8;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0){
			printf("given number is not prime");
		}
		else{
			printf("given number is prime");
		}
	}
}