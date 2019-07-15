'''
Given a non-empty array of integers, every element appears twice except for one. Find that single one.
Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Input: [2,2,1]
Output: 1

'''
class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        ans=0
        for x in nums:
                ans=ans^x
        return ans 
