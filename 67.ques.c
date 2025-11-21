#include <stdio.h>

int main() {
    int n, pos, val;
    scanf("%d", &n); 
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    scanf("%d %d", &pos, &val); 
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val; 
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

