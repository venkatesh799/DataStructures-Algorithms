/*
https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3298/
*/

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        int sum=0;
        int longest=0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i]==0?-1:1;
            if(sum == 0)
            {
                if(longest < i+1)
                {
                    longest=i+1;
                }
            }
            else if(m.find(sum) != m.end())
            {
                if(longest < i-m[sum])
                {
                    longest=i-m[sum];
                }
            }
            else
            {
                m[sum]=i;
            }
        }
        return longest;
        
    }
};
