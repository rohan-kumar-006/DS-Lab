#include <stdio.h>
int sum(int num,int ans){
    if(num==0){
        return ans;
    }
    else{
        int rem=num%10;
        ans+=rem;
        num/=10;
        sum(num,ans);
    }
}
void main()
{
    int num,ans=0;
    printf("Enter the Number\n");
    scanf("%d", &num);
    printf("%d",sum(num,ans));
}
