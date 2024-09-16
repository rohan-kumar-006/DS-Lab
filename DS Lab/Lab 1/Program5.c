//Program for Missing number in an array
#include <stdio.h>
int main(){
    int arr[100],n,total_sum,sum=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for (int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        //main logic
        sum=sum+arr[i];
    }
    
    total_sum=(n*(n+1))/2;
    int missing_number=total_sum-sum;
    printf("%d",missing_number);

}