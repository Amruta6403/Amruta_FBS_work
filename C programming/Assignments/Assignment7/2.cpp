#include <stdio.h>

void checkPalindrome(int *num)
{
    int original = *num;
    int reverse = 0, remainder;

    while (original != 0)
    {
        remainder = original % 10;
        reverse = reverse * 10 + remainder;
        original = original / 10;
    }

    if (reverse == *num)
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}

int main()
{
    int n;
    printf("Enter a 3-digit number: ");
    scanf("%d", &n);

    checkPalindrome(&n);
    return 0;
}n