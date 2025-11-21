#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int ans[4];
    int left = 1, right = 1;

    for (int i = 0; i < n; i++) ans[i] = 1;

    for (int i = 0; i < n; i++) {
        ans[i] *= left;
        left *= nums[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= right;
        right *= nums[i];
    }

    for (int i = 0; i < n; i++) printf("%d ", ans[i]);
    return 0;
}
