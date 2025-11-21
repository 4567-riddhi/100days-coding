#include <stdio.h>

int main() {
    int n1, n2, i, j;
    int arr1[100], arr2[100], merged[200], size = 0;
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        merged[size++] = arr1[i];
    }
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        int found = 0;
        for (j = 0; j < size; j++) {
            if (merged[j] == arr2[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            merged[size++] = arr2[i];
        }
    }
    for (i = 0; i < size; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
