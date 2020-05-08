/*

Given a positive integer num, output its complement number. The complement strategy is to flip the bits of its binary representation.

 

Example 1:

Input: num = 5
Output: 2
Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2

*/

class Solution {
public:
    int findComplement(int num) 
    {
        long long int base=1;
        while(base <= num)
        {
            base = base * 2;
        }
       return num^(base-1);
    }
};
