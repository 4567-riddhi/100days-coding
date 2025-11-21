#include <stdio.h>

int main() {
    int nums[] = {2,2,1,1,1,2,2,3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int count, i, j;

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }
        if (count > n / 2) {
            printf("%d\n", nums[i]);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
