

#include <stdio.h>

int main()
{
    int n = 12345;
    int first, last, sum;

    last = n % 10;   // get last digit

    // find first digit
    while(n >= 10)
    {
        n = n / 10;
    }

    first = n;

    sum = first + last;

    printf("Sum = %d", sum);

    return 0;
}
