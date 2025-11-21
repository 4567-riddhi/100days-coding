#include <stdio.h>

int main() {
    char num[100];
    int count[10] = {0};
    scanf("%s", num);
    for (int i = 0; num[i] != '\0'; i++) {
        int digit = num[i] - '0';
        count[digit]++;
    }
    int max_digit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > count[max_digit]) {
            max_digit = i;
        }
    }
    printf("%d\n", max_digit);
    return 0;
}
