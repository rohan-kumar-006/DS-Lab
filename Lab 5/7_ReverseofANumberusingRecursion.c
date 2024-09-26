#include <stdio.h>
int rev(int num,int ans){
    if(num==0){
        return ans;
    }
    else{
        int rem=num%10;
        ans=ans*10+rem;
        num/=10;
        rev(num,ans);
    }
}
void main()
{
    int num,ans=0;
    printf("Enter the Number\n");
    scanf("%d", &num);
    printf("%d",rev(num,ans));
}
