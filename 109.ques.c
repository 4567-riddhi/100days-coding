#include <stdio.h>

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_sum = 0;

    for (int i = 0; i <= n - k; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++) {
            current_sum += arr[i + j];
        }
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum sum of subarrays of size %d is %d\n", k, max_sum);
    return 0;
}
