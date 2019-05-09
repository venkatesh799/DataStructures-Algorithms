#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root=NULL;
void add(void);
int length(void);
void display(void);
void main()
{
    int ch,len;
    while(1)
    {
        printf("enter your choice\n");
        printf("1.add  2.length   3.display\n");
        scanf("%d",&ch);
            switch(ch)
            {
                case 1:add();
                        break;
                case 2:len=length();
                        printf("length is: %d\t",len);
                        break;
                case 3:display();
                        break;
                default :printf("wrong statement\n");
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
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *p;
        p=root;
        while(p->link !=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }
}
int length()
{
    struct node *temp;
    int count=0;
    temp=root;
    while(temp != NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
void display()
{
    struct node *temp;
    temp=root;
    if(temp==NULL)
    {
        printf("Empty list\n");
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
