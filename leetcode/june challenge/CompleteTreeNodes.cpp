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
    int getnodes(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        TreeNode* left=root;
        TreeNode* right= root;
        int l_h=0,r_h=0;
        while(left)
        {
            l_h++;
            left=left->left;
        }
        while(right)
        {
            r_h++;
            right=right->right;
        }
        if(l_h==r_h)
            return ((1<<(l_h))-1);
        return 1+getnodes(root->left)+getnodes(root->right);
        
        
    }
    
    int countNodes(TreeNode* root) {
        return getnodes(root);
        
    }
};