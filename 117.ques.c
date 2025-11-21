#include <stdio.h>

int main() {
    int a[] = {2, 7, 11, 15}, b[] = {4, 8, 10};
    int m = 4, n = 3, i = 0, j = 0;

    while (i < m && j < n)
        printf("%d ", a[i] < b[j] ? a[i++] : b[j++]);
    while (i < m) printf("%d ", a[i++]);
    while (j < n) printf("%d ", b[j++]);

    return 0;
}
