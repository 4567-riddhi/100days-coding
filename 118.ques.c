#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    printf("Missing number is: %d\n", total - sum);
    return 0;
}
