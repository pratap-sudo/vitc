#include <stdio.h>

int main()
{
    int i, arr[100], n, j, key;

    printf("enter the value of n : ");
    scanf("%d", &n);
    printf("n is : %d  \n ", n);

    // input functionality
    printf(" enter values of array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };

    // array printing functionality
    printf(" array :");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // insertion short
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf(" array :");
    for (i = 0; i < n; i++)
    {
        printf("%d  ,", arr[i]);
    }

    return 0;
}