/*

Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

Example:

Input:
[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
Output: 7
Explanation: Because the path 1→3→1→1→1 minimizes the sum.

*/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid)
    {
        
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int row=grid.size(),i,j;
        if(row == 0)
            return 0;
        int col=grid[0].size();
        vector<vector<int>> dp(row,vector<int>(col,0));
        dp[0][0] = grid[0][0];
        
        //Filling 1st row
        
        for(i=1;i<col;i++)
        {
            dp[0][i]=dp[0][i-1]+grid[0][i];
        }
        
        //Filling 1st Col
        
        for(j=1;j<row;j++)
        {
            dp[j][0]=dp[j-1][0]+grid[j][0];
        }
        
        //Fillling remaining
        
        for(i=1;i<row;++i)
        {
            for(j=1;j<col;++j)
            {
                dp[i][j] = grid[i][j] + min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[row-1][col-1];
        
    }
};
