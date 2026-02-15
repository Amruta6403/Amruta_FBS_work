#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = 0;

        for(j = 1; j < i; j++) {
            if(i % j == 0) {
                sum = sum + j;   // Add divisors
            }
        }

        if(sum == i) {   // Perfect number condition
            printf("%d ", i);
        }
    }

    return 0;
}
