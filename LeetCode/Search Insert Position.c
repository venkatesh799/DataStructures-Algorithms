// @venkatesh thirunagiri

/* Given a sorted array and a target value, return the index if the target is found.

If not, return the index where it would be if it were inserted in order*/

int searchInsert(int* nums, int numsSize, int target)
{
    int i;
    if(nums[numsSize-1] < target)
    {
        return numsSize;
    }
     for(i=0;i<numsSize;i++)
    {
        if(nums[i] == target)
        {
            return i;
        }
    }
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]<=target && nums[i+1]>=target)
        {
            return i+1;    
        }
    }
    return 0;

}

