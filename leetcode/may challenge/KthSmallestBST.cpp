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
    int res,p=0;
    
   void find(TreeNode* root) 
   {
       if(root==NULL)
           return;
       find(root->left);
       p--;
       if(p==0)
       {
           res=root->val;
       }
       find(root->right);
       return;
   }
    
    
    int kthSmallest(TreeNode* root, int k) {
        p=k;
        find(root);
        return res;
        
        
        
    }
};