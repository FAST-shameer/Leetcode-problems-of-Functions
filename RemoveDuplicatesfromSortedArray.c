int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int unique = 1;

    // we're considering that the first element is unique, hence starting from the second element
    for (int i = 1; i < numsSize; i++){
        if (nums[i] != nums[i - 1]){
            nums[unique] = nums[i];
            unique++;
        }
    }
    return unique;
}
