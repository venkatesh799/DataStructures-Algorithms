/*
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false

*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
         bool ans=true;
        for(int i=0;i<ransomNote.length();i++)
        {
            int check1=count(ransomNote.begin(),ransomNote.end(),ransomNote[i]);
            int check2=count(magazine.begin(),magazine.end(),ransomNote[i]);
            if(check2 >= check1)
            {
                ans=true;
            }
            else
            {
                return false;
            }
        }
        return ans;
    }
};
