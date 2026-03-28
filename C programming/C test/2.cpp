//2. Write a program to print following series: 
//1 + 11+ 111+ 1111+ ….. + n times 1 

#include <stdio.h>

int main() {
    int n, i, term = 0, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        term = term * 10 + 1;
        printf("%d ", term);
        sum = sum + term;
    }

    printf("Sum = %d", sum);

    return 0;
}