/*

Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.

Example 1:
Input: text = "nlaebolko"
Output: 1

Example 2:
Input: text = "loonbalxballpoon"
Output: 2

Example 3:
Input: text = "leetcode"
Output: 0  */


class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        int a[26]={0};
        for(int i=0;i<text.length();i++)
        {
            a[text[i] - 'a']++;
        }
        int ans=0;
        
        if(a[0] > 0 && a[1] > 0 && a[11]/2 > 0 && a[14]/2 && a[13] > 0)
        {
            ans=min(a[0],min(a[1],min(a[11]/2,min(a[14]/2,a[13]))));
        }
        return ans;
    }
};
