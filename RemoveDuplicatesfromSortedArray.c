int removeDuplicates(int *nums, int numsSize) {
    int J = 1;

    if (numsSize == 0)
        return 0;
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] != nums[i - 1]) {
            nums[J] = nums[i];
            ++J;
        }
    }
    return J;
}