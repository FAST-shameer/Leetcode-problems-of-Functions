void moveZeroes(int* nums, int numsSize) {
    int insertPos = 0;

    for (int i = 0; i < numsSize; i++){
        if (nums[i] != 0){
            if (i != insertPos){
                int temp = nums[i];
                nums[i] = nums[insertPos];
                nums[insertPos] = temp;
            }
            insertPos++;
        }
    }
}
