// Sum of factorial of its digits = Original number

#include <stdio.h>

int main()
{
    int n = 145;
    int original = n;
    int remainder, sum = 0;
    int i, fact;

    while(n > 0)
    {
        remainder = n % 10;   // get last digit
        fact = 1;

        // find factorial of digit
        for(i = 1; i <= remainder; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;     // add factorial to sum
        n = n / 10;           // remove last digit
    }

    if(sum == original)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}
