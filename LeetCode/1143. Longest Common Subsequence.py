'''  Given two strings text1 and text2, return the length of their longest common subsequence.

A subsequence of a string is a new string generated from the original string with some characters(can be none) deleted without changing the relative order of the remaining characters. (eg, "ace" is a subsequence of "abcde" while "aec" is not). A common subsequence of two strings is a subsequence that is common to both strings.

 

If there is no common subsequence, return 0.

 

Example 1:

Input: text1 = "abcde", text2 = "ace" 
Output: 3  
Explanation: The longest common subsequence is "ace" and its length is 3.  ''' 

class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        s1=text1
        s2=text2
        match=[[0 for x in range(len(s2))] for y in range(len(s1))]
        final_S1_or_S2=0
        final_S1=1
        final_S2=2
        for x in range(len(s1)):
            for y in range(len(s2)):
                if s1[x] == s2[y]:
                    if x == 0 or y == 0:
                        match[x][y]=1
                    else:
                        match[x][y]=1+match[x-1][y-1]
                    
                else:
                    if x > 0 and y > 0:
                        if match[x-1][y] >= match[x][y-1]:
                            match[x][y]=match[x-1][y]
                            
                        else:
                            match[x][y]=match[x][y-1]
                            
                    elif x == 0 and y > 0:
                        match[x][y]=match[x][y-1]
                        
                    elif y == 0 and x > 0:
                        match[x][y]=match[x-1][y]
                        

        return match[len(s1)-1][len(s2)-1]
