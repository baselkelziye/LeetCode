/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *sumArray = (int*)(malloc(*returnSize * sizeof(int)));
    
    int i,tmp =0;
    for(i = 0; i < numsSize; i++){
        sumArray[i] = tmp + nums[i];
        tmp = sumArray[i];
    }
    return sumArray;
}