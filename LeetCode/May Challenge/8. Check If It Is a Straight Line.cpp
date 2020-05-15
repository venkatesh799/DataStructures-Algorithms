/*

You are given an array coordinates, coordinates[i] = [x, y], where [x, y] 
represents the coordinate of a point. Check if these points make a straight line in the XY plane.

Example 1:
Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
Output: true

Example 2:
Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
Output: false 

*/

float slope(int x1,int y1,int x2,int y2)
    {
        if(x2-x1 == 0)
        {
            return -1;
        }
        float m=float(y2-y1)/float(x2-x1);
        return m;
    }
    bool checkStraightLine(vector<vector<int>>& coordinates) 
    {
        if(coordinates.size() == 2)
        {
           return true;
        }
        int x1=coordinates[0][0];
        int y1=coordinates[0][1];
        int x2=coordinates[1][0];
        int y2=coordinates[1][1];
        float m=slope(x1,y1,x2,y2);
        for(int i=1;i<coordinates.size()-1;i++)
        {
            float tempslope=slope(coordinates[i][0],coordinates[i][1],coordinates[i+1][0],coordinates[i+1][1]);
            if(tempslope != m)
                {
                    return false;
                }
        }

        return true;
    }
