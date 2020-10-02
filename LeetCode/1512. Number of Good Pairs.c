/*
 Problem : https://leetcode.com/problems/number-of-good-pairs/
 
 Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.

 

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good  */

// Solution :


int numIdenticalPairs(int* nums, int numsSize)
{
    int ans=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i] == nums[j] && i < j)
            {
                ans++;
            }
        }
    }
    return ans;
}
