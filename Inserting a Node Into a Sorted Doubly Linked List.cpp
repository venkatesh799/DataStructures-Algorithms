/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data)
 {
if(head == NULL)
{
    return head;
}

DoublyLinkedListNode* p=head;
DoublyLinkedListNode* temp=(DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
temp->prev=NULL;
temp->next=NULL;
temp->data=data;
if(data <= p->data)
{
    temp->next=p;
    p->prev=temp;
    head=temp;
    return head;
}
int i=0;
while(p->next)
{
    if(data >= p->data && data <= p->next->data)
    {
        temp->next=p->next;
        p->next->prev=temp;
        p->next=temp;
        temp->prev=p;
        return head;
    }
    p=p->next;
}
p->next=temp;
temp->prev=p;
return head;
}
