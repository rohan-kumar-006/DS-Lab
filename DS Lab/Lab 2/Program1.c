#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr[100], n1, n2, temp;
    printf("Enter the no elements in array1");
    scanf("%d\n", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the no elements in array2");
    scanf("%d\n", &n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    // Main logic
    for (int i = 0; i < n1; i++)
    {
        arr[i] = arr1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        arr[n1 + i] = arr2[i];
    }

    for (int i = 0; i < (n1 + n2); i++)
    {
        for (int j = 0; j < (n1 + n2-1); j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
    for (int i = 0; i < (n1 + n2); i++)
    {
        printf("%d\n", arr[i]);
    }
}