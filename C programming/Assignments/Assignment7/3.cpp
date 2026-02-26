#include <stdio.h>

void checkLeapYear(int *year)
{
    if ((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0))
        printf("Leap Year\n");
    else
        printf("Not a Leap Year\n");
}

int main()
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);

    checkLeapYear(&y);
    return 0;
}