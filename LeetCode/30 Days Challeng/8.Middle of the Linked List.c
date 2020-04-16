/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head){
 /*
 https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3290/
 */
 
 
    int length=0,mid1=0,mid2=0;
    struct ListNode *temp=head;
    while(temp)
    {
        length+=1;
        temp=temp->next;
    }
    if(length == 1)
    {
        return head;
    }
    mid1=length/2;
    //printf("%d  %d",length,mid1);
    struct ListNode *p=head;
    while(p)
    {   
        mid2+=1;
        p=p->next;
        if(mid1 == mid2)
        {
            head=p;
            break;
        }
    }
    return head;

}

