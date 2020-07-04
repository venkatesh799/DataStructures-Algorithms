/*

https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

*/


class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int product=1,sum=0;
        while(n)
        {
            product*=n%10;
            sum+=n%10;
            n=n/10;
        }
        return product-sum;
    }
};
