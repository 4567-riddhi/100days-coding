#include <stdio.h>

int main() {
    FILE *fp;
    char name[50], ch;

    printf("Enter filename: ");
    scanf("%s", name);

    fp = fopen(name, "r");

    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
