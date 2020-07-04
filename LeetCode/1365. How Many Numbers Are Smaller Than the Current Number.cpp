/*
https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
*/


class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
       vector<int> ans;
        int count=0;
       for(int i=0;i<nums.size();i++)
       {
           for(int j=0;j<nums.size();j++)
           {
               if(nums[i] > nums[j])
               {
                   count+=1;
               }
           }
           ans.push_back(count);
           count=0;
       }
        return ans;
    }
};
