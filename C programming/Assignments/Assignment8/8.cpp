#include <stdio.h>

int main()
{
    int arr[50], brr[50], crr[100];
    int n1, n2, i;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &brr[i]);
    }

    // Copy first array into third array
    for(i = 0; i < n1; i++)
    {
        crr[i] = arr[i];
    }

    // Copy second array into third array
    for(i = 0; i < n2; i++)
    {
        crr[n1 + i] = brr[i];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}