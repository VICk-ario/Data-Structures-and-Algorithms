#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int nums[], int numsSize) {

    const int MAX_VALUE = 10000;
    bool seen[MAX_VALUE + 1];

    for (int i = 0; i <= MAX_VALUE; i++) {
        seen[i] = false;
    }

    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]]) {
            return true;
        } else {
            seen[nums[i]] = true;
        }
    }

    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    printf("Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    if (containsDuplicate(nums, numsSize)) {
        printf("\nThe array contains duplicates.\n");
    } else {
        printf("\nThe array does not contain duplicates.\n");
    }

    return 0;
}
