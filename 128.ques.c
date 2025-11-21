#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int v = 0, c = 0;

    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
                v++;
            else
                c++;
        }
    }

    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}
