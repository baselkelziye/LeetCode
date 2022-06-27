

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* replaceElements(int* arr, int arrSize, int* returnSize){
    int i,j;
    int curr_max = 0;
    *returnSize = arrSize;
    int* returnArr;
    returnArr = (int*)(malloc(sizeof(int)*(*returnSize)));
    for(i = 0; i <  *returnSize-1; i++){
        curr_max = arr[i+1];
        for(j = i+1; j <*returnSize; j++){
            if(arr[j] > curr_max){
                curr_max = arr[j];
            }
            returnArr[i] = curr_max;
        }
    }
    returnArr[*returnSize -1 ] = -1;
    
    return returnArr;
}