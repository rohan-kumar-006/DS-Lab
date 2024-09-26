#include <stdio.h>
int main()
{
    int arr1[100][100],arr[100][100], r1, c1,temp;
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
                if(i==j){
                    continue;
                }
                else if(i<j){
                    temp=arr1[i][j];
                    arr1[i][j]=arr1[j][i];
                    arr1[j][i]=temp;
                }
            }
        }
    // printing
        for (int i = 0; i < c1; i++)
        {
            for (int j = 0; j < r1; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
    
}