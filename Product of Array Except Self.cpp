/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/
*/

//Solution 1: Not Recommended TimeComplexity O(n2) ans with Extra Space

    class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> ans;
            for(int i=0;i<nums.size();i++)
            {
                int temp=1;
                for(int j=0;j<nums.size();j++)
                {
                    if(i != j)
                    {
                             temp=temp*nums[j];              
                    }
                }
                ans.push_back(temp);
            }
            return ans;
        }
    };
    
    
 //Solution 2:  Recommended  Optimal Solution
    
    
      class Solution {
  public:
      vector<int> productExceptSelf(vector<int>& nums) {
          vector<int> ans;
          int product=1;
          for(int i=0;i<nums.size();i++)
          {
              product*=nums[i];
              ans.push_back(product);
          }
          product=1;
          for(int i=nums.size()-1;i>0;i--)
          {
              ans[i]=ans[i-1]*product;
              product*=nums[i];
          }
          ans[0]=product;
          return ans;
      }

  };
