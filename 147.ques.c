#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter Employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter Employee Name: ");
    scanf("%s", e1.name);

    printf("Enter Employee Salary: ");
    scanf("%f", &e1.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee details entered and stored in file.\n");

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details Read From File ---\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
