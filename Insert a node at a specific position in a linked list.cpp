SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{
    if(head == NULL)
    {
        return head;
    }
    else if(position == 0)
    {
        return head;
    }
    int i=0;                        
    SinglyLinkedListNode *p=head;
    SinglyLinkedListNode* temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    temp->data=data;
    temp->next=NULL;
    while(i < position-1)
    {                                       
        p=p->next;   
        i++;                       
    }                                  
    temp->next=p->next;
    p->next=temp;
    return head;
}
