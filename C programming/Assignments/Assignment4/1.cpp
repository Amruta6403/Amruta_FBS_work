#include <stdio.h>

int main() {
    int n, i, num, remainder, sum;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        num = i;
        sum = 0;

        while(num > 0) {
            remainder = num % 10;
            sum = sum + (remainder * remainder * remainder); // cube of digit
            num = num / 10;
        }

        if(sum == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
