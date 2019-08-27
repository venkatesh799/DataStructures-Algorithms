# Venkatesh Thirunagiri


'''
Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
'''

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        res=ListNode(None)
        start=res
        carrier=0
        
        """calculate sum of digits"""
        
        while l1 or l2:
            sum1=0
            if l1 and l2:
                sum1=l1.val+l2.val+carrier
                l1=l1.next
                l2=l2.next
            elif l1:
                sum1=l1.val+carrier
                l1=l1.next
            elif l2:
                sum1=l2.val+carrier
                l2=l2.next
           
           """split carrier from sum"""
           
           if sum1 >= 10:
                carrier=1
                sum1=sum1%10
            else:
                carrier=0
             
           	"""insert sum of digits into list"""
           
           res.val=sum1
           
           """breaking condition is when carrier is zero and both lists are completely traversed"""
           if not l1 and not l2 and not carrier:
                break
                
            res.next=ListNode(None)
            res=res.next
         
         """in case both lists have been traversed but carrier is one we insert it into the list and break"""
            if not l1 and not l2 and carrier:
                res.val=carrier
                break
        return start
        
            
