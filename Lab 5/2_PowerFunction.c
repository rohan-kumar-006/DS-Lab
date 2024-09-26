#include <stdio.h>
int power(int num,int exp){
    if(exp==0){
        return 1;
    }
    else{
        return power(num,exp-1)*num;
    }
}
void main(){
    int num,exp;
    printf("Enter the Number");
    scanf("%d",&num);
    
    printf("Enter the Power");
    scanf("%d",&exp);

    printf("%d",power(num,exp));
}