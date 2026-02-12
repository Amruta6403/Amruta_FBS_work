/*Find factorial of given number.
Input: n = 5
Output: 120*/
//n!=n×(n-1)×(n-2)×...×1
#include <stdio.h>

int main()
{
    int n = 5;
    int fact = 1;

    for(int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}
