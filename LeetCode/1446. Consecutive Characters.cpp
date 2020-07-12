/*

https://leetcode.com/problems/consecutive-characters/

*/

class Solution {
public:
    int maxPower(string s) 
    {
        int ans=1,temp=1;
        if(s.size() == 1)
        {
            return 1;
        }
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i] == s[i+1])
            {
                temp++;
            }
            else
            {
                ans=max(ans,temp);
                temp=1;
            }
        }
        return max(ans,temp);
    }
};
