#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp = {"Raj", 11, {12, 5, 2020}};
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           emp.name, emp.id,
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}
