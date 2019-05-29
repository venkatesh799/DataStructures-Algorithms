// venkatesh thirunagiri
// Double linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *root=NULL;
void add();
void add_at_begin();
void add_afterat_specificed();
void delete();
int length();
void disply();
void main()
{
    int ch,l;
    while(1)
    {
    printf("Enter your choice \n");
    printf("1.Add Element\n");
    printf("2.Add At Begin\n");
    printf("3.Add After Specifierd Node\n");
    printf("4.Delete Element\n");
    printf("5.Delete Last Element Element\n");
    printf("6.Length\n");
    printf("7.Display\n");
     scanf("%d",&ch);
     switch(ch)
     {
        default:printf("Invalid Choice\n");
        case 1:add();
                break;
        case 2:add_at_begin();
                break;
        case 3:add_afterat_specificed();
                break;
        case 4:delete();
                break;
        case 5:delete_at_last();
                break;
        case 6:l=length();
                printf("Length is: %d\n",l);
                break;
        case 7:disply();
                break;
     }
    
}
}
void add()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->prev=p;
    }
}
void add_at_begin()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&temp->data);
    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        temp->next=root;
        root->prev=temp;
        root=temp;
    }
}
void add_afterat_specificed()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    int loc,l;
    l=length();
    printf("Enter location \n");
    scanf("%d",&loc);
    printf("Enter Data\n");
    scanf("%d",&temp->data);
    temp->next=NULL;
    temp->prev=NULL;
    if(loc>l || root == NULL)
    {
        printf("Invalid location");
        printf("List has only %d nodes",l);
    }
    else
    {
        struct node *p,*q;
        p=root;
       int i=1;
       while(i<loc)
       {
           p=p->next;
           i++;
       }
       q=p->next;
       temp->next=q;
       temp->prev=p;
       p->next=temp;
       q->prev=temp;
  }
}
int length()
{
    struct node *temp;
    int count=0;
    temp=root;
    while(temp != NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
void delete()
{
    int loc,len=length();
    printf("Enter Location to Delete\n ");
    scanf("%d",&loc);
    if(loc > len)
    {
        printf("Invalid Location\n");
        printf("List have only %d Nodes",len);
    }
    else if(loc == 1)
    {   
        struct node *temp;
        temp=root;
        root=temp->next;
        root->prev=NULL;
        free(temp);
    }
    else
    {   
        int i=1;
        struct node *p,*q;
        p=root;
        while(i<loc-1)
        {
            p=p->next;
            i++;
        }
        q=p->next;
        q->next->prev=p;
        p->next=q->next;
    }
    
}
void delete_at_last()
{
    struct node *temp,*current;
    temp=root;
    int l;
    l=length();
    if(root == NULL)
    {
        printf("can't Delete List is Empty");
    }
    else if(l==1)
    {
        root=NULL;
    }
    else
    {
        while(temp != NULL)
        {   
            current=temp;
            temp=temp->next;
        }
        current->prev->next=NULL;
        
    }
}
void disply()
{
    struct node *temp;
    temp=root;
    if(root == NULL)
    {
        printf("List is Empty\n");
    }
    else
    {
    
    while(temp->next != NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    }
    
}
