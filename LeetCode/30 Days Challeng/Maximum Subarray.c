/*

Maximum Subarray
Solution
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6. */


int maximum(int* nums,int numsSize)
{
    int max1;
    max1=nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(max1 < nums[i])
            max1=nums[i];
    }
    return max1;
}
int maxSubArray(int* nums, int numsSize){
    int SUM=0,MAXSUM=0,k;
    k=maximum(nums,numsSize);
    if(numsSize == 1)
        return nums[0];
    if(k < 0)
        return k;
    for(int i=0;i<numsSize;i++)
    {
        SUM=SUM+nums[i];
        if(SUM > MAXSUM)
            MAXSUM=SUM;
        if(SUM < 0)
            SUM=0;
    }
    return MAXSUM;
}

