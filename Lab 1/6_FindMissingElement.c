//Program to find which element is repeated in the array and which is not
#include <stdio.h>
int main(){
    int arr[100],n,count;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //main logic
    for (int i=0;i<n;i++){
        count=0;
        for (int j=0;j<n;j++){
            if (i==j){
                continue;
            }
            else if (arr[i]==arr[j]){
                count++;
            }
        }

        if(count==0){
            printf("%d%s",arr[i],"is not repeated");
        }
        else{
            printf("%d%s",arr[i],"is repeated");
        }
    }


}