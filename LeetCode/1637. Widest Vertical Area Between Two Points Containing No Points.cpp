/*  

    Problem Statement   :  https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/
    
    
*/

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) 
    {
        int ans=0;
        vector<int> target;
        for(int i=0;i<points.size();i++)
        {
            target.push_back(points[i][0]);
        }
        sort(target.begin(),target.end());
        for(int i=1;i<target.size();i++)
        {
            if(target[i] - target[i-1] > ans)
            {
                ans = target[i] - target[i-1];
            }
        }
        return ans;
    }
};
