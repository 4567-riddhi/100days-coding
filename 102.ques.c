#include <stdio.h>

int findCeilIndex(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] >= x) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 2, 8, 10, 11, 12, 19};
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    int size = sizeof(arr) / sizeof(arr[0]);
    int index = findCeilIndex(arr, size, x);

    printf("%d\n", index);
    return 0;
}
