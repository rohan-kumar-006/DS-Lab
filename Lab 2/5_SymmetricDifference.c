// Program for Symmetric Difference
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr[100], n1, n2, n3 = 0, pos;
    printf("Enter the no elements in array1");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the no elements in array2");
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        int flag = 1;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            arr[n3++] = arr1[i];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        int flag = 1;
        for (int j = 0; j < n1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            arr[n3++] = arr2[i];
        }
    }
    for (int i = 0; i < n3; i++)
    {
        printf("%d\n", arr[i]);
    }
}