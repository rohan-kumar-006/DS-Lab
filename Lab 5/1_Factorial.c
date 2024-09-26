#include <stdio.h>
int fact(int num){
    if(num==1||num==0){
        return 1;
    }
    else{
        return fact(num-1)*num;
    }
}
void main(){
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    printf("%d",fact(num));
}