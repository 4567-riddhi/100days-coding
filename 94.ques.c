#include <stdio.h>

int main() {
    char ch;
    char word[50], longest[50];
    int length = 0, maxLength = 0, i = 0;

    printf("Enter a sentence (end with '.'): ");
    while (1) {
        ch = getchar();
        if (ch == '.') {
            if (length > maxLength) {
                maxLength = length;
                for (int j = 0; j < length; j++) {
                    longest[j] = word[j];
                }
                longest[length] = '\0';
            }
            break;
        }

        if (ch == ' ' || ch == '\n') {
            if (length > maxLength) {
                maxLength = length;
                for (int j = 0; j < length; j++) {
                    longest[j] = word[j];
                }
                longest[length] = '\0';
            }
            length = 0;
            i = 0;
        } else {
            word[i] = ch;
            i++;
            length++;
        }
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
