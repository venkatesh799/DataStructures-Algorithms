// Reversing a Single Linked List
// @venkatesh
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
void add(void);
void display(void);
int length(void);
void reverse(void);
void main()
{
    int ch,len;
    while(1)
    {   
        printf("enter your choice\n");
        printf("1.Add  2.Display  3.length  4.Reverse\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:add();
                    break;
            case 2:display();
                    break;
            case 3:len=length();
                    printf("length is : %d",len);
                    break;
            case 4:reverse();
                    break;
            default:printf("invalid choice\n");
                    break;
        }
    }
}
void add()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link != NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
void display()
{
    struct node *temp;
    temp=root;
    if(root == NULL)
    {
        printf("list ha no elements\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}
int length()
{
    int count=0;
    struct node *temp;
    temp=root;
    while(temp != NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
void reverse()
{
   int i,j,k,len;
   struct node *p,*q,*temp;;
   i=0;
   len=length();
   j=len-1;
   p=q=root;
   while(i<j)
   {
       k=0;
       while(k<j)
       {
           q=q->link;
           k++;
       }
       temp=q->data;
       q->data=p->data;
       p->data=temp;
       p=p->link;
       i++;
       j--;
       q=root;
   }
}
