/*Check the given number is Armstrong number or not..
Input: n = 153
Output: Armstrong*/

#include <stdio.h>

int main()
{
    int n = 153;
    int original = n;
    int remainder, sum = 0;

    for( ; n > 0; n = n / 10)
    {
        remainder = n % 10;   // get last digit
        sum = sum + (remainder * remainder * remainder); // cube and add
    }

    if(sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}
