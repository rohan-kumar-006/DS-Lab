//3. Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include <stdio.h>
struct student
{
    char name[50],address[40];
    int roll_no,age;
    float marks;
};
void main(){
    struct student s[2];
    printf("Enter the details\n");
    for(int i=0;i<15;i++){
        scanf("%s",&s[i].name);
        scanf("%d%d",&s[i].roll_no,&s[i].age);
        scanf("%s",&s[i].address);
        scanf("%f",&s[i].marks);
    }
    for(int i=0;i<15;i++){
        printf("Name :%s\n",s[i].name);
        printf("Roll No :%d \nAge :%d\n",s[i].roll_no,s[i].age);
        printf("Address :%s\n",s[i].address);
        printf("Marks:%f\n",s[i].marks);
    }

    
}