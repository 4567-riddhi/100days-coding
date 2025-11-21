#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "w");
    fprintf(fp, "%s %d %d\n", "Asha", 101, 85);
    fprintf(fp, "%s %d %d\n", "Ravi", 102, 92);
    fclose(fp);

    fp = fopen("students.txt", "r");
    char name[50];
    int roll, marks;

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3)
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);

    fclose(fp);
    return 0;
}
