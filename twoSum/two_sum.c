/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *arr = malloc(sizeof(int) * 2);
    *returnSize = 2;
   int idx1 = 0;
   int idx2 = 0;
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
              arr[0] = i;
              arr[1] = j;
              return arr;
            }
        }
    }
    return (0);
}
