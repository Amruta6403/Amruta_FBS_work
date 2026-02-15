#include <stdio.h>

int main() {
    int choice, num, i, count = 0, temp, remainder, reverse = 0, sum = 0;

    printf("\nMenu:");
    printf("\n1. Check Even or Odd");
    printf("\n2. Check Prime or Not");
    printf("\n3. Check Palindrome or Not");
    printf("\n4. Check Positive, Negative or Zero");
    printf("\n5. Reverse a Number");
    printf("\n6. Sum of Digits");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(choice) {

        case 1: // Even or Odd
            if(num % 2 == 0)
                printf("Even Number");
            else
                printf("Odd Number");
            break;

        case 2: // Prime
            for(i = 1; i <= num; i++) {
                if(num % i == 0)
                    count++;
            }
            if(count == 2)
                printf("Prime Number");
            else
                printf("Not Prime Number");
            break;

        case 3: // Palindrome
            temp = num;
            while(temp > 0) {
                remainder = temp % 10;
                reverse = reverse * 10 + remainder;
                temp = temp / 10;
            }
            if(reverse == num)
                printf("Palindrome Number");
            else
                printf("Not Palindrome Number");
            break;

        case 4: // Positive, Negative or Zero
            if(num > 0)
                printf("Positive Number");
            else if(num < 0)
                printf("Negative Number");
            else
                printf("Zero");
            break;

        case 5: // Reverse
            temp = num;
            while(temp > 0) {
                remainder = temp % 10;
                reverse = reverse * 10 + remainder;
                temp = temp / 10;
            }
            printf("Reversed Number = %d", reverse);
            break;

        case 6: // Sum of digits
            temp = num;
            while(temp > 0) {
                remainder = temp % 10;
                sum = sum + remainder;
                temp = temp / 10;
            }
            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
