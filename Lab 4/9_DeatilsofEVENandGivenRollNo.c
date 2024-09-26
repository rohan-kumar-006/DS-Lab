#include <stdio.h>
struct student
{
    char name[50],address[40];
    int roll_no,age;
    float marks;
};
void evenrollno(struct student s[]){
    for(int i=0;i<15;i++){
        if ((s[i].roll_no)%2==0){
        printf("Name :%s\n",s[i].name);
        printf("Roll No :%d \nAge :%d\n",s[i].roll_no,s[i].age);
        printf("Address :%s\n",s[i].address);
        printf("Marks:%f\n",s[i].marks);
        }
    }
}
void givenrollno(struct student s[],int roll){
    for(int i=0;i<15;i++){
        if (s[i].roll_no==roll){
        printf("Name :%s\n",s[i].name);
        printf("Roll No :%d \nAge :%d\n",s[i].roll_no,s[i].age);
        printf("Address :%s\n",s[i].address);
        printf("Marks:%f\n",s[i].marks);
        }
    }
}
void main(){
    struct student s[20];
    int rollnumber;
    printf("Enter the details\n");
    for(int i=0;i<15;i++){
        scanf("%s",s[i].name);
        scanf("%d%d",&s[i].roll_no,&s[i].age);
        scanf("%s",&s[i].address);
        scanf("%f",&s[i].marks);
    }
    printf("Details of Studenst with even roll no\n");
    evenrollno(s);
    printf("Enter the Roll No\n");
    scanf("%d",&rollnumber);
    givenrollno(s,rollnumber);
}