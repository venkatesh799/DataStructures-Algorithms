/*

Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true

*/

 bool isPerfectSquare(int num)
    {
       long int left=1,right=num;
        while(left <= right)
        {
            long int mid=(left+right)/2;
            long int square=mid*mid;
            if(square == num)
            {
                return true;
            }
            else if(square > num)
            {
                right=mid-1;
            }
            else if(square < num)
            {
                left=mid+1;
            }
        }
        return false;
        
    }
