#include <stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the elements");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}