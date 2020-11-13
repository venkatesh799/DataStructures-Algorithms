/*
  Problem Statement  :  https://leetcode.com/problems/longest-increasing-subsequence/
  
  Given an unsorted array of integers, find the length of longest increasing subsequence.

  Example:

  Input: [10,9,2,5,3,7,101,18]
  Output: 4 
  Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4. 
  Note:

  There may be more than one LIS combination, it is only necessary for you to return the length.
  Your algorithm should run in O(n2) complexity.  

*/

// Solution  :

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans(n,1);
        if(n == 0)
            return 0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j] < nums[i] && ans[j]+1 > ans[i])
                {
                    ans[i] = ans[j]+1;
                }
            }
        }
        return *max_element(ans.begin(),ans.end());
    }
    
};
