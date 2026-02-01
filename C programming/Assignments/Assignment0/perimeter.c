#include <stdio.h>

int main() {
    float length, width, perimeter;

    // Input length and width
    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    // Calculate perimeter
    perimeter = 2 * (length + width);

    // Display result
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}