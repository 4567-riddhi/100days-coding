#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0;
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    len = i;
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
