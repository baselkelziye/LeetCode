

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
  int* index1 =  (int* )malloc((*returnSize) * sizeof(int));
    int i,j;
    
    for(i = 0; i < numsSize-1; i++){
        for(j=i+1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                index1[0] = i;
                index1[1] = j;
              break;
            }
        }
    }
  
return index1;
}