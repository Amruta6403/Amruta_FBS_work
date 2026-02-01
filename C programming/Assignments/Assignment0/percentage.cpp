#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate total
    total = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage (assuming each subject is out of 100)
    percentage = (total / 500) * 100;

    // Display results
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}