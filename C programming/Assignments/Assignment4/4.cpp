#include <stdio.h>

int main() {
    int n, i, num, remainder, sum, fact;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while(num > 0) {
            remainder = num % 10;
            fact = 1;

            // Find factorial of digit
            for(int j = 1; j <= remainder; j++) {
                fact = fact * j;
            }

            sum = sum + fact;
            num = num / 10;
        }

        if(sum == i) {   // Strong number condition
            printf("%d ", i);
        }
    }

    return 0;
}
