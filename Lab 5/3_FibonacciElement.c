#include <stdio.h>
int fibo(int num){
    if(num==1){
        return 0;
    }
    else if(num==2){
        return 1;
    }
    else{
        return fibo(num-1)+fibo(num-2);
    }
}
void main(){
    int num;
    printf("Enter the Number\n");
    scanf("%d",&num);
    printf("%d",fibo(num));
}