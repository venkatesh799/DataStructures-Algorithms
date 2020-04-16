/*
Move Zeroes
Solution
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations. */



void moveZeroes(int* nums, int numsSize){
    int left=0,right=0,temp;
    if(numsSize == 0 || numsSize == 1)
    {
        return;
    }
    while(right < numsSize)
    {
        if(nums[right] == 0)
        {
            right++;
        }
        else
        {
            temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            right++;
            left++;
        }
    }
     
}

