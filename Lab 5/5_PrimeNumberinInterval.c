#include <stdio.h>
int prime(int a,int b){
    int flag;
    for(int i=a;i<=b;i++){
        flag=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if (flag==1){
            printf("%d\n",i);
            
        }
    }
}
void main(){
    int num1,num2;
    printf("Enter the Lower Limit\n");
    scanf("%d",&num1);
    printf("Enter the Upper Limit\n");
    scanf("%d",&num2);
    prime(num1,num2);
}