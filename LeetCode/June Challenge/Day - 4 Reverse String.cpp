/*
https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/

*/

class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n=s.size();
        char temp;
        for(int i=0;i<n/2;i++)
        {   
            temp=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=temp;
        }
    }
};
