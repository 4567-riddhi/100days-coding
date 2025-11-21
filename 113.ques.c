#include <stdio.h>

int findKthSmallest(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    return arr[k - 1];
}

int main() {
    int arr[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findKthSmallest(arr, n, k);
    printf("%d\n", result); 
    return 0;
}
