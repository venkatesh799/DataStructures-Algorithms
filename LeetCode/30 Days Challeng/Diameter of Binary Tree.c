/*
https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3293/
*/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a,int b)
{
    return (a > b) ? a: b;
}

int height(struct TreeNode *p)
{
    if(p == NULL)
    {
        return 0;
    }
    int left=height(p->left);
    int right=height(p->right);
    return 1+max(left,right);
}
int diameterOfBinaryTree(struct TreeNode* root){
    
    if(root == NULL)
        return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    int ldiameter=diameterOfBinaryTree(root->left);
    int rdiameter=diameterOfBinaryTree(root->right);
    int ans=max(lheight+rheight,max(ldiameter,rdiameter));
    return ans;

}

