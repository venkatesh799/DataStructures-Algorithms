/*

Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1
Example 2:

Input:
11000
11000
00100
00011

Output: 3

*/


class Solution {
public:
    void markisland(vector<vector<char>> &temp,int r,int c,int x,int y)
    {
        if(x < 0 || x >=r || y < 0 || y>=c || temp[x][y] != '1')
        
            return;
        //Current Cell Visited
        temp[x][y]='2';
        
        markisland(temp,r,c,x,y+1);  //RIGHT
        markisland(temp,r,c,x+1,y);  //DOWN
        markisland(temp,r,c,x-1,y);  //TOP
        markisland(temp,r,c,x,y-1);  //LEFT
      
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int ans=0,row,col;
        row=grid.size();
        if(row == 0)
            return 0;
        col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j] == '1')
                {
                markisland(grid,row,col,i,j);
                ans+=1;
                }
            }
        }
        return ans;
    }
};
