// Write a program to count number of words in a string.


 #include <stdio.h>

int main() {
    char str[50];
    int i, count = 1;

    printf("Enter string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            count++;
    }

    printf(" No of Words present in the strings are = %d", count);

    return 0;
}
