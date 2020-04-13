/*
https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3297/
*/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        sort(stones.begin(),stones.end());
        while((stones.size() != 0 && stones.size() != 1))
        {
            int n=stones.size();
            int y=stones[n-1];
            int x=stones[n-2];
            stones.pop_back();
            stones.pop_back();
            if(x != y)
            {
                y=y-x;
                stones.push_back(y);
            }
            sort(stones.begin(),stones.end());
        }
        if(stones.size() == 0)
        {
            return 0;
        }
        return stones.front();
        
    }
};
