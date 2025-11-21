#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5];   
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    printf("\n%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("--------------------------------------\n");
    for(i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
