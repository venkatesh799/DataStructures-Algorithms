/*

Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

Note that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

For example, 

Given the tree:
        4
       / \
      2   7
     / \
    1   3
And the value to insert: 5
You can return this binary search tree:

         4
       /   \
      2     7
     / \   /
    1   3 5
This tree is also valid:

         5
       /   \
      2     7
     / \   
    1   3
         \
          4
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    struct TreeNode *parent,*temp2;
    temp2=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp2->val=val;
    temp2->left=NULL;
    temp2->right=NULL;
    if(root == NULL)
    {
        root=temp2;
        return root;
    }
    else
    {
        struct TreeNode *current=root;
        while(current)
        {
            parent=current;
            if(val > current->val)
                current=current->right;
            else
                current=current->left;
        }
    }
    if(temp2->val > parent->val)
        parent->right=temp2;
    else
        parent->left=temp2;
    return root;
    

}

