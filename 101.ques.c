#include <stdio.h>

void findIndices(int nums[], int size, int target) {
    int first = -1, last = -1;
    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    printf("%d,%d\n", first, last);
}
int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target;

    printf("Enter target: ");
    scanf("%d", &target);

    int size = sizeof(nums) / sizeof(nums[0]);
    findIndices(nums, size, target);

    return 0;
}
