//  Problem statement  :  https://leetcode.com/problems/longest-continuous-increasing-subsequence/
/*
   Given an unsorted array of integers nums, return the length of the longest continuous increasing subsequence
   
   Example 1:

  Input: nums = [1,3,5,4,7]
  Output: 3
  Explanation: The longest continuous increasing subsequence is [1,3,5] with length 3.
  Even though [1,3,5,7] is an increasing subsequence, it is not continuous as elements 5 and 7 are separated by element
  4.

*/


class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        int n=nums.size(),res=0,count=1;
        if(n == 0) return 0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1] < nums[i])
            {
                count++;
                res=max(res,count);
            }
            else
            {
                count=1;
            }
        }
       return max(res,count);
    }
};
