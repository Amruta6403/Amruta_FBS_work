//Check Even or Odd (Using Pointer)


#include <stdio.h>

void checkEvenOdd(int *num)
{
    if (*num % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(&n);   // Passing address
    return 0;
}