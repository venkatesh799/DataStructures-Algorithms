/*

https://leetcode.com/problems/decompress-run-length-encoded-list/

*/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums)
    {
        vector<int> ans;
        int j,n=nums.size(),fre,val,i=0;
        while(n > i)
        {
            fre=nums[i];
            val=nums[i+1];
            j=0;
            while(j < fre)
            {
                ans.push_back(val);
                fre--;
            }
            i+=2;
        }
        return ans;
    }
};
