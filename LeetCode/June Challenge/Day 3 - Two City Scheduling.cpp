/*

https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3349/

*/
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int n=costs.size();
        sort(costs.begin(),costs.end(),[](vector<int> &a,vector<int> &b)
        {
          if(a[1] - a[0] > b[1] - b[0])
              return true;
          return false;
        });
        
        int total=0;
        for(int i=0;i<n/2;i++)
        {
            total+=costs[i][0];
        }
        for(int i=n/2;i<n;i++)
        {
            total+=costs[i][1];
        }
        return total;
    }
};
