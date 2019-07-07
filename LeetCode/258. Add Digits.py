'''
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
'''
class Solution:
    def addDigits(self, num: int) -> int:
        def answer(n):
            sum=0
            while n > 0:
                r=n%10
                n=n//10
                sum=sum+r
            return sum
        k=answer(num)
        while k >= 10:
            k=answer(k)
        else:
            return k
