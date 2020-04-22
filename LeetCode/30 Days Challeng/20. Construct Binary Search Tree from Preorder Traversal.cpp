/*

Return the root node of a binary search tree that matches the given preorder traversal.

(Recall that a binary search tree is a binary tree where for every node, any descendant of node.left has a value < node.val, and any descendant of node.right has a value > node.val.  Also recall that a preorder traversal displays the value of the node first, then traverses node.left, then traverses node.right.)

 

Example 1:

Input: [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]


*/



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        struct TreeNode *root=NULL;
        
        for(int i=0;i<preorder.size();i++)
        {
            struct TreeNode *temp;
            temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
            temp->val=preorder[i];
            temp->left=NULL;
            temp->right=NULL;
            
            if(root == NULL)
            {
                root = temp;
            }
            else
            {
                struct TreeNode *p=root,*current;
                
                while(p)
                {
                    current=p;
                    if(preorder[i] > p->val)
                    {
                        p=p->right;
                    }
                    else
                    {
                        p=p->left;
                    }
                }
                if(preorder[i] > current->val )
                {
                    current->right=temp;
                }
                else
                {
                    current->left=temp;
                }
                
                
            }
        }
        return root;

    }
};
