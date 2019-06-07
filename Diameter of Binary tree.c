#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newNode(int data) 
{ 
  struct node* node = (struct node*) 
                       malloc(sizeof(struct node)); 
  node->data = data; 
  node->left = NULL; 
  node->right = NULL; 
  
  return(node); 
} 
int diameter(struct node *tree)
{
    if(tree==NULL)
    return 0;
    else
    {
  int lheight = height(tree->left); 
  int rheight = height(tree->right); 
  int ldiameter = diameter(tree->left); 
  int rdiameter = diameter(tree->right); 
   return max(lheight + rheight + 1, max(ldiameter, rdiameter)); 
    }
}
int height(struct node* node) 
{ 
  
   if(node == NULL) 
       return 0; 
   return 1 + max(height(node->left), height(node->right)); 
}  
  int max(int a, int b) 
{ 
  return (a >= b)? a: b; 
}     
  

void main()
{
    int k;

struct node *root = newNode(1); 
  root->left        = newNode(2); 
  root->right       = newNode(3); 
  root->left->left  = newNode(4); 
  root->left->right = newNode(5); 
  root->left->left->left = newNode(50);
 k= diameter(root);
 printf("%d",k);
}
