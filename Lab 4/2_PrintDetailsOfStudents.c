#include <stdio.h>
struct student
{
    char name[50];
    int roll_no,age;
    float marks;
};
void main(){
    struct student s[2];
    printf("Enter the details\n");
    for(int i=0;i<5;i++){
        scanf("%s",&s[i].name);
        scanf("%d%d",&s[i].roll_no,&s[i].age);
        scanf("%f",&s[i].marks);
    }
    for(int i=0;i<2;i++){
        printf("Name :%s\n",s[i].name);
        printf("Roll No :%d \n Age :%d\n",s[i].roll_no,s[i].age);
        printf("Marks:%f\n",s[i].marks);
    }

    
}