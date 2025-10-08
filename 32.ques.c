#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    if (original == reversed) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
