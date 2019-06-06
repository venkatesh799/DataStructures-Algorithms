// @ venkatesh thirunagiri

#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
void insert_at_end(void);
void insert_at_begin(void);
void insert_at_specified(void);
void delete_at_begin(void);
void delete_at_end(void);
void delete_at_specified(void);
int length();
void display(void);
void main()
{
    int ch,len;
    while(1)
    {
        printf("\n1.insert_at_end\n");
        printf("2.insert_at_begin\n");
        printf("3.insert_at_specified\n");
        printf("4.delete_at_end\n");
        printf("5.delete_at_begin\n");
        printf("6.delete_at_specified\n");
        printf("7.length\n");
        printf("8.display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_at_end();
                    break;
            case 2:insert_at_begin();
                    break;
            case 3:insert_at_specified();
                    break;
            case 4:delete_at_end();
                    break;
            case 5:delete_at_begin();
                    break;
            case 6:delete_at_specified();
                    break;
            case 7:len=length();
                    printf("length is:%d\n",len);
                    break;
            case 8:display();
                    break;
            default:printf("Wrong selection\n");
                    break;
        }
    }
}
void insert_at_end()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head == NULL)
    {
        
         head=temp;
         tail=head;
    }
    else
    {
        tail->next=temp;
        tail=temp;
        temp->next=head;
    }
    
}
void insert_at_begin()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&temp->data);
    if(head == NULL)
    {
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        temp->next=head;
        head=temp;
    }
    
}
void insert_at_specified()
{
    int pos,i;
    struct node *temp,*p;
    p=head;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter position to insert element\n");
    scanf("%d",&pos);
    if(pos > length())
    {
        printf("invalid position \n");
    }
    else
    {
    printf("Enter Data\n");
    scanf("%d",&temp->data);
    for(i=0;i<pos-1;i++)
    {
        p=p->next;
    }
    temp->next=p->next;
    p->next=temp;
    }
    
}
void delete_at_begin()
{
    tail->next=head->next;
    head=head->next;
}
void delete_at_specified()
{
    struct node *p;
    int pos,i;
    printf("Enter position to delete node\n ");
    scanf("%d",&pos);
    if(pos > length())
    {
        printf("invalid position\n");
    }
    else
    {   p=head;
        for(i=1;i<pos-1;i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
    }
}
void delete_at_end()
{
 struct node *p;
 p=head;
 if(head == NULL)
 {
     printf("Empty List\n");
 }
 else
 {
 while(p->next != tail)
 {
     p=p->next;
 }
 p->next=head;
 tail->next=NULL;
 tail=p;
 }
}
void display()
{
    struct node *p;
    p=head;
    if(head == NULL)
    {
        printf("Empty list\n");
    }
    else
    {
    while(p != tail)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("%d",p->data);
    }
}
int length()
{
    int count=0;
    struct node *p;
    p=head;
    if(head == NULL)
    {
        return count;
    }
    else
    {
        while(p->next != head)
        {
            p=p->next;
            count++;
        }
        return count+1;
    }
}
