// Single Linked List
//@Venkatesh Thirunagiri
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
void delete(void);
void add_after(void);
void add_begin(void);
void delete_atbegin(void);
void main()
{
    int ch,le;
    printf("Enter your choice\n");
    while(1)
    {
        printf("1.Add  2.Display  3.Length   4.Delete  5.Add After  6.Add at begin  7.Delete First Node\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:add();
                    break;
            case 2:display();
                    break;
            case 3:le=length();
                    printf("length is : %d",le);
                    break;
            case 4:delete();
                    break;
            case 5:add_after();
                    break;
            case 6:add_begin();
                    break;
            case 7:delete_atbegin();
                    break;
            default :printf("Enter correct choice");
                    break;
        }
    }
}
void add()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("enter data\n");
    scanf("%d",&temp->data);
    temp->link= NULL;
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
        printf("List is Empty\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("%d\t\n",temp->data);
            temp=temp->link;
        }
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
void delete()
{
    struct node *temp;
    int loc;
    printf("Enter Location to Delete\n");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("Invalid Location\n");
    }
    else if(loc == 1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {
        struct node *q;
        temp=root;
        int i=1;
        while(i < loc-1)
        {
            temp=temp->link;
            i++;
        }
        q=temp->link;
        temp->link=q->link;
        q->link=NULL;
        free(q);
    }
}
void add_after()
{
    struct node *temp,*p;
    int loc;
    printf("Enter Location\n");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("list has only %d : Elements only",length());
    }
    else
    {
        int i=1,data;
        temp=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&temp->data);
        temp->link=NULL;
        p=root;
        while(i<loc)
        {
            p=p->link;
            i++;
        }
        temp->link=p->link;
        p->link=temp;
    }
}
void add_begin()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    if(root == NULL)
    {
        root=temp;
    }
    else
    {
    printf("Enter data");
    scanf("%d",&temp->data);
    //temp->link=NULL;
    temp->link=root;
    root=temp;
    }
}
void delete_atbegin()
{
    if(root == NULL)
    {
        printf("List ha sno elements");
    }
    else
    {
        struct node *temp;
        temp=root;
        root=temp->link;
        temp->link=NULL;
    }
}
