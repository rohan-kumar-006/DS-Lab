#include <stdio.h>
int main()
{
    int arr1[100][100],arr[100][100], r1, c1;
    printf("Enter the order of the matrix1\n");
    scanf("%d%d", &r1, &c1);
        
    printf("Enter the Elements of the matrix\n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                arr[i][j] = arr1[j][i];
            }
        }
    // printing
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    
}