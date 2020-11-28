// Problem Statement  :   https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/

#include<cstring>
class Solution {
public:
    int minInsertions(string s)
    {
        int n=s.length()+1;
        int dp[n][n];
        string s1=s;
        reverse(s1.begin(),s1.end());
        memset(dp,0,sizeof(dp));
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(s[i-1] == s1[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return n-dp[n-1][n-1]-1;    
    }
};
