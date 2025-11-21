#include <stdio.h>

int main() {
    
    int arr[] = {1, 7, 3, 6, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int total = 0, left = 0;

    for (int i = 0; i < n; i++) total += arr[i];
    for (int i = 0; i < n; i++) {
        if (left == total - left - arr[i]) {
            printf("%d\n", i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1\n");
    return 0;
}
