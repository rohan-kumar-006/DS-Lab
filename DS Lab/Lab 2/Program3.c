// Program for Set Intersection
#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], arr[100], n1, n2, n3=0, pos;
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
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr[n3++] = arr1[i];
                break;
            }
        }
    }
    for (int i = 0; i <n3; i++)
    {
        printf("%d\n", arr[i]);
    }
}