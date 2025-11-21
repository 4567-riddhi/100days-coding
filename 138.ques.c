#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main() {
    int i;
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for(i = RED; i <= GREEN; i++) {
        printf("%s=%d ", names[i], i);
    }

    return 0;
}