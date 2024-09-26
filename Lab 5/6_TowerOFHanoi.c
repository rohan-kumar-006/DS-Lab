#include <stdio.h>
void hanoi(int num,char Source,char Med,char Dest){
    if(num==1){
        printf("Move disc form %c to %c\n",Source,Dest);
    }
    else{
        hanoi(num-1,Source,Dest,Med);
        printf("Move disc form %c to %c\n",Source,Dest);
        hanoi(num-1,Med,Source,Dest);
    }
}
int main(){
    int num;
    char Med='M',Source='S',Dest='D';
    printf("Enter the Number of discs:");
    scanf("%d",&num);
    hanoi(num,Source,Med,Dest);
    return 0;
}