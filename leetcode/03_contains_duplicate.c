#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) return true;
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 1};
    printf("Contains duplicate: %s\n", containsDuplicate(nums, 4) ? "true" : "false");
    return 0;
}
