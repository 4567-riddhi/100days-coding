#include <stdio.h>

int main() {
    char ch;
    int count = 0;

    while ((ch = getchar()) != '\n') {
        count++;
    }

    printf("%d\n", count);
    return 0;
}
