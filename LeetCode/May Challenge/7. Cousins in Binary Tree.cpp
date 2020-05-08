/*

In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.

 

Example 1:


Input: root = [1,2,3,4], x = 4, y = 3
 
      1
    /   \
   2     3
  /
 4

Output: false
  
      1
    /   \
   2     3
  /       \
 4         5

Example 2:

Input: root = [1,2,3,null,4,null,5], x = 5, y = 4
Output: true

*/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   
    int getlevel(TreeNode *root,int search,int level)
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->val == search)
        {
            return level;
        }
        int l=0;
        l=getlevel(root->left,search,level+1);
        if(l != 0)
        {
            return l;
        }
        l=getlevel(root->right,search,level+1);
        return l;
    }
    
    bool isSiblings(TreeNode* root,int a,int b)
    {
        bool x=false,y=false,z=false;
        if(root == NULL)
        {
            return false;
        }
        if(root->left != NULL && root->right != NULL)
        {
           x= (root->left->val == a && root->right->val == b) 
                || (root->left->val == b && root->right->val == a);
        }
        if(root->left != NULL)
        {
        
            y= isSiblings(root->left, a, b);
        }
        if(root->right != NULL)
        {
        
           z=isSiblings(root->right, a, b);
        }
        return (x || y || z);
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
        {
            return false;
        }
        int a=getlevel(root,x,1) ;
        int b=getlevel(root,y,1); 
        bool sib=isSiblings(root,x,y);
        //cout<<a<<"  "<<b;
        //cout<<sib;
        if(a != b)
        {
            return false;
        }
        if(!sib)
        {
            return true;
        }
            
        return false;
        
    }
};
