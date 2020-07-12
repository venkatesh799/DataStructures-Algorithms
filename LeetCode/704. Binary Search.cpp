/*

https://leetcode.com/problems/binary-search/

*/

class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        return ans(nums,target,0,nums.size()-1);  
    }
    int ans(vector<int> nums,int target,int left,int right)
    {
        while(left <= right)
        {
            if(nums[(left+right)/2] == target)
            {
                return (left+right)/2;
            }
            else if(target < nums[(left+right)/2])
            {
                return ans(nums,target,0,((left+right)/2)-1);
            }
            else
            {
                return ans(nums,target,((left+right)/2)+1,right);
            }
            }
        return -1;
    }
};
