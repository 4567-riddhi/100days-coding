#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (isspace(ch)) inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
