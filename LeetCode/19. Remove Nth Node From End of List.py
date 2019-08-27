# Venkatesh Thirunagiri

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeNthFromEnd(self, head: ListNode, n: int) -> ListNode:
        k=head
        length=0
        while k is not None:  # Finding Length of Linked List
            length+=1
            k=k.next
        delete_pos=length-n          #Finding Delete Posion from front
        if delete_pos == 0:       # if it is First Element 
            head=head.next
            return head
        else:
            i=1
            a=head
            while i < delete_pos:
                a=a.next
                i+=1
            a.next=a.next.next
            return head
            
        
