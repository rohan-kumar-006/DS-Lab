#include <stdio.h>

struct Marks {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main() {
    struct Marks students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter Chemistry marks: ");
        scanf("%d", &students[i].chem_marks);
        printf("Enter Mathematics marks: ");
        scanf("%d", &students[i].maths_marks);
        printf("Enter Physics marks: ");
        scanf("%d", &students[i].phy_marks);
    }

    for (int i = 0; i < 5; i++) {
        int total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (total_marks / 3.0);
        printf("Roll No: %d, Name: %s, Percentage: %.2f%%\n", students[i].roll_no, students[i].name, percentage);
    }
    return 0;
}
