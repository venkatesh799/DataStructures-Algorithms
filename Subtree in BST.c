#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL,*troot;
void insert(void);
void search(int);
void preorder();
void main()
{
    int i,n,q;
    //printf("Enter no of nodes");
    scanf("%d",&n);
    //printf("Enter search element");
    
    for(i=0;i<n;i++)
    {
        insert();
    }
    scanf("%d",&q);
    search(q);
    preorder(troot);
}
void insert()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    //printf("enter data");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(root == NULL)
    {
        root=temp;
    }
    else
    {
        struct node *curr,*p;
        curr=root;
        while(curr)
        {
            p=curr;
            if(temp->data > curr->data)
            {
                curr=curr->right;
            }
            else
            {
                curr=curr->left;
            }
        }
        if(temp->data > p->data)
        {
            p->right=temp;
        }
        else
        {
            p->left=temp;
        }
    }
}
void search(int q)
{
    struct node *cur;
    cur=root;
    while(cur)
    {
        if(q > cur->data)
        {
            cur=cur->right;
        }
        else
        {
            cur=cur->left;
        }
        if(cur->data == q)
        {
            troot=cur;
           // printf("element found :%d",q);
            //free(cur);
            break;
        }
    }
}
void preorder(struct node *troot)
{
    if(troot)
        {
            printf("%d\n",troot->data);    
            preorder(troot->left);    
            preorder(troot->right);           }
}
