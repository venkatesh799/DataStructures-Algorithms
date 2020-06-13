/*

https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) 
    {
        fun(root);
        return v;
    }
    void fun(TreeNode *root)
    {
        if(root == NULL)
            return;
        fun(root->left);
        v.push_back(root->val);
        fun(root->right);
    }
};
