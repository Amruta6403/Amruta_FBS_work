//Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>

int main() {
    int minutes, hours, remainingMinutes;

    // Input total minutes
    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    // Conversion
    hours = minutes / 60;
    remainingMinutes = minutes % 60;

    // Output
    printf("Hours = %d\n", hours);
    printf("Remaining Minutes = %d\n", remainingMinutes);

    return 0;
}