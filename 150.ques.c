#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1;       
    struct Student *ptr;    
    ptr = &s1;             

    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

   
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
