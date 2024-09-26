#include <stdio.h>
int gcd(int num1,int num2){
    if(num2==0){
        return num1;
    }
    else{
        
        return gcd(num2,num1%num2);
    }
}
void main(){
    int num1,num2;
    printf("Enter the First Number");
    scanf("%d",&num1);
    printf("Enter the Second Number");
    scanf("%d",&num2);
    printf("%d",gcd(num1,num2));
}