#include <stdio.h>

int main() {
    int arr[] = {-8, 2, 3, -6, 10};  
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= n - k; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                printf("%d ", arr[i + j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("0 ");
        }
    }

    return 0;
}
