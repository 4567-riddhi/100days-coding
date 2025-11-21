#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], count[100] = {0}; 

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (count[arr[i]] == 1) {
            printf("Repeated number is: %d\n", arr[i]);
            return 0;
        }
        count[arr[i]] = 1;
    }

    return 0;
}
