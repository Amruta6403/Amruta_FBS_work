#include <stdio.h>

int main() {
    float base, height, area;

    // Input base and height
    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    // Calculate area
    area = 0.5 * base * height;

    // Display result
    printf("Area of triangle = %.2f\n", area);

    return 0;
}