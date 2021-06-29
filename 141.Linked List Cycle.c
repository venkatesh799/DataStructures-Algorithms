/*
#Linked List Cycle

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by 
continuously following the next pointer. Internally, pos is used to denote the index of the node 
that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

[Problem Statement] (https://leetcode.com/problems/linked-list-cycle/)

*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p = head;
    struct ListNode *q = head;
    while(p && q && q->next) {
        p = p->next;
        q = q->next->next;
        if(p == q) {
            return 1;
        }
    }
    return 0;
    
}
