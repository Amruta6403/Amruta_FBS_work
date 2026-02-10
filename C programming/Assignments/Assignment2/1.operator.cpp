//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    printf("enter the two numbers: ");
    scanf("%d %d", &a, &b);

    printf("enter the operator (+-*/%%): ");
    scanf(" %c", &op);

    if(op == '+')
    {
        printf("Result = %d", a + b);
    }
    else if(op == '-')
    {
        printf("Result = %d", a - b);
    }

    return 0;
}
