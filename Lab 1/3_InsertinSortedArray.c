#include <stdio.h>
int main(){
    int arr[100],n,item,pos;
    printf("Enter the elements");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
    printf("Enter the new elements");
    scanf("%d",&item);
    //logic
    for (int i=0;i<n;i++){
        if(arr[i]>item){
            pos=i;
            break;
        }
    }
    printf("%d\n",pos);
    
    for (int i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=item;
    for (int i=0;i<n+1;i++){
        printf("%d",arr[i]);
    }    
}