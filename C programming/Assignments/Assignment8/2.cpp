// Search the given number in array

#include <stdio.h>

int main()
{
    int n, element, arr[100];
    int found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter all elements in the array:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search in array: ");
    scanf("%d", &element);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            printf("Element found %d at position %d\n", arr[i], i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found in the array\n");
    }

    return 0;
}