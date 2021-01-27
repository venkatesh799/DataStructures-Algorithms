/*
    A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
    The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
    Now consider if some obstacles are added to the grids. How many unique paths would there be?
    An obstacle and space is marked as 1 and 0 respectively in the grid.
    
    Problem Statement  :   https://leetcode.com/problems/unique-paths-ii/
    
*/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) 
    {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        int dp[row][col];
        bool flag=false;
        
        //Filling 1st row
        for(int i=0;i<col;i++)
        {
            if(flag || obstacleGrid[0][i] == 1)
            {
                flag=true;
                dp[0][i] = 0;
            }
            else
            {
                dp[0][i] = 1;
            }
        }
        //Filling 1st col
        flag = false;
        for(int i=0;i<row;i++)
        {
            if(flag || obstacleGrid[i][0] == 1)
            {
                flag =true;
                dp[i][0] = 0;
            }
            else
            {
                dp[i][0] = 1;
            }
        }
        for(int i=1;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                if(obstacleGrid[i][j] == 1)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        return dp[row-1][col-1];
        
    }
};
