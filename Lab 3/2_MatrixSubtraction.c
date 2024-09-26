#include <stdio.h>
int main()
{
    int arr1[100][100], arr2[100][100], arr[100][100], r1, c1, r2, c2;
    printf("Enter the order of the matrix1\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter the order of the matrix2\n");
    scanf("%d%d", &r2, &c2);
    if ((r1==r2) && (c1==c2)){
        
        printf("Enter the Elements of the matrix1\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("Enter the Elements of the matrix2\n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &arr2[i][j]);
            }
        }
        // main logic
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                arr[i][j] = arr1[i][j] - arr2[i][j];
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
    else{
        printf("%s","Matrix Subtarction cant be done as the row and column of both the matrix is not same");
    }
}