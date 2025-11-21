#include <stdio.h>

int main() {
    int n, roll, marks, topMarks = -1, topRoll;
    char name[50], topName[50];

    scanf("%d", &n);  
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        if (marks > topMarks) {
            topMarks = marks;
            topRoll = roll;
            for (int j = 0; name[j]; j++) topName[j] = name[j];
            topName[strlen(name)] = '\0';
        }
    }
    printf("Topper: %s (Marks: %d)\n", topName, topMarks);
    return 0;
}
