//Program for reversal of an array.
#include <stdio.h>
int main(){
    int arr[100],n,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //main logic
    for(int i=0;i<n/2;i++){
        temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}