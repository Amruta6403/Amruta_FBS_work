//8. Print a pattern of stars in diamond shape
//Input: n = 4
//Output:
//
//*
//**
//***
//****
//***
//**
//*


#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // Upper half
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for(i = n - 1; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
