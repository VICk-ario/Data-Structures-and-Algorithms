#include <stdio.h>

int singleNumber(int nums[], int numsSize) {
    int result = 0;

    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }

    return result;
}

int main() {
    int nums[] = {4, 2, 1, 2, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    printf("Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    int single = singleNumber(nums, numsSize);

    printf("\nThe single non-duplicate element is: %d\n", single);

    return 0;
}
