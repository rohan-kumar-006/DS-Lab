#include <stdio.h>
int main()
{
    int arr[100], n, del_elem, pos;
    printf("Enter the number of element :");
    scanf("%d", &n);
    printf("Enter the elements of the array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to delete : ");
    scanf("%d", &del_elem);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == del_elem)
        {
            pos = i;
            break;
        }
    }
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < (n - 1); i++)
    {
        printf("%d", arr[i]);
    }
}
