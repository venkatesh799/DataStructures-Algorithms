/*

https://leetcode.com/problems/xor-operation-in-an-array/

*/

class Solution {
public:
    int xorOperation(int n, int start) 
    {
        int ans=0;
        ans=start+2 * 0;
        for(int i=1;i<n;i++)
        {
            ans=ans^start + 2 * i;
        }
        return ans;
    }
};
