#include <stdio.h>
struct student
{
    char name[50];
    int roll_no;
    float marks[6];
}s;
void main(){
    float temp;
    float sum=0;
    float best[6];
    int n=0;
    printf("Enter the details\n");
    scanf("%s",s.name);
    scanf("%d",&s.roll_no);
    for(int i=0;i<6;i++){
        scanf("%f",&s.marks[i]);
        best[n++]=s.marks[i];
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6-i-1; j++)
            if (best[j] > best[j + 1])
            {
                temp = best[j];
                best[j] = best[j + 1];
                best[j + 1] = temp;
            }
    }

    for(int i=0;i<6;i++){
        sum+=best[i];
    }
    if (sum/4>=95){
        printf("Can take admission");
    }
    else{
        printf("Can cannot take admission");
    }
}
