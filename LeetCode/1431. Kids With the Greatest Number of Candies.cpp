/*

https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

*/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
         int a=candies[0];
          vector<bool> ans;
         for(int i=1;i<candies.size();i++)
          {
            if(a < candies[i])
            {
                a=candies[i];
            }
          } 
        //auto a=*max_element(candies.begin(),candies.end());   // More Time 12 ms   without this 4 ms
          
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies >= a)
            {
               ans.push_back(true);
            }
            else
            {
                 ans.push_back(false);
            }
         }
        return ans;
    }
};
