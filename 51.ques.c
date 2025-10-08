#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int space = 1; space < i; space++) {
            printf(" ");
        } 
        for (int num = i; num <= 5; num++) {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}

