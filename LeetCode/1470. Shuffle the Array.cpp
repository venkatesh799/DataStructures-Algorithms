/*

https://leetcode.com/problems/shuffle-the-array/

*/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
       vector<int> ans;
       int l=0,r=n;
       while(ans.size() != nums.size())
       {
           ans.push_back(nums[l]);
           ans.push_back(nums[r]);
           l++;
           r++;
       }
        return ans;
       
    }
};
