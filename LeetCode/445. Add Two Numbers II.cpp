/*

https://github.com/venkatesh799/DataStructures-Algorithms/new/master/LeetCode


You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Follow up:
What if you cannot modify the input lists? In other words, reversing the lists is not allowed.

Example:

Input: (7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 8 -> 0 -> 7

*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        stack<int> a;
        stack<int> b;
        while(l1 != NULL && l2 != NULL)
        {
            a.push(l1->val);
            b.push(l2->val);
            l1=l1->next;
            l2=l2->next;
        }
        while(l1 != NULL)
        {
            a.push(l1->val);
             l1=l1->next;
        }
        while(l2 != NULL)
        {
            b.push(l2->val);
            l2=l2->next;
        }
        struct ListNode *head=NULL;
        int carry=0;
        while(!a.empty()  && !b.empty())
        {
            
            int c=a.top()+b.top()+carry;
            a.pop();
            b.pop();
            if(head == NULL)
            {
                struct ListNode *temp;
                temp=new ListNode(c%10);
                temp->next=NULL;
                head=temp;
            }
            else
            {
                struct ListNode *p;
                p=new ListNode(c%10);
                p->next=head;
                head=p;
            }
            if(c >= 10)
            {
                carry = 1;
            }
            else
            {
                carry=0;
            }
        }
        int k=0;
        while(!a.empty())
        {
            k=0;
             if(carry == 1)
            {
                k=a.top()+carry;
                if(k >= 10)
                {
                    carry=1;
                }
                else
                {
                    carry=0;
                }
                k=k%10;
            }
            else
            {
                k=a.top();
            }
                struct ListNode *p;
                p=new ListNode(k);
                a.pop();
                p->next=head;
                head=p;
        }
        while(!b.empty())
        {
            k=0;
            if(carry == 1)
            {
                k=b.top()+carry;
                if(k >= 10)
                {
                    carry=1;
                }
                else
                {
                    carry=0;
                }
                k=k%10;
            }
            else
            {
                k=b.top();
            }
                struct ListNode *p;
                p=new ListNode(k);
                b.pop();
                p->next=head;
                head=p;
          
        }
        if(carry == 1)
        {
            struct ListNode *p;
            p=new ListNode(1);
            p->next=head;
            head=p;
        }
        return head;
    }
};
