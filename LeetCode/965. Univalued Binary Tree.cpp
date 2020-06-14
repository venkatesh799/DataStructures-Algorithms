/*

A binary tree is univalued if every node in the tree has the same value.

Return true if and only if the given tree is univalued.

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
    int ans=1;
    bool isUnivalTree(TreeNode* root)
    {
     if(root == NULL)
         return false;
     
     ans=fun(root,root->val);
     return ans;
         
    }
    int fun(TreeNode *root,int data)
    {
        if(root->left != NULL)
            fun(root->left,data);
        if(root->val != data)
        {
           ans=0;
        }
        if(root->right != NULL)
            fun(root->right,data);
        return ans;
    }
};
