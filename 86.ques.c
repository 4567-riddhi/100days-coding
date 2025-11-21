#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0, isPalindrome = 1;
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    len = i;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
