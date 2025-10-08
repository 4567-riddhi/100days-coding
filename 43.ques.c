#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, original, sum = 0;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}
