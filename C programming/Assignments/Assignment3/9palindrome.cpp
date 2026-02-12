//Reverse of number = Original number

#include <stdio.h>

int main()
{
    int n = 121;
    int original = n;
    int remainder, reverse = 0;

    while(n > 0)
    {
        remainder = n % 10;          // get last digit
        reverse = reverse * 10 + remainder;  // build reverse number
        n = n / 10;                  // remove last digit
    }

    if(reverse == original)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
