/*

https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/

*/

class Solution {
public:
    int numberOfSteps (int num)
    {
        int ans=0;
        while(num != 0)
        {
            if(num % 2 == 0)
            {
                ans+=1;
                num=num/2;
            }
            else
            {
                ans+=1;
                num-=1;
            }
        }
        return ans;
    }
};
