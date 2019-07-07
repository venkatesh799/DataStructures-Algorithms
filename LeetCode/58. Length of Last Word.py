'''
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Input: "Hello World"
Output: 5
'''
class Solution:
    def lengthOfLastWord(self, s: str) -> int:
            length=0
            s=s.strip()
            if not s:
                return length
            l=len(s)-1
            for x in range(l,-1,-1):
                if s[x] == " ":
                    break
                else:
                    length+=1
            return length

        
