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
    int search(vector<int>& v,int ele,int start,int end)
    {
        for(int i=start;i<=end;i++)
        {
            if(v[i]==ele)
                return i;
            
        } 
        return -1;
    }  
    TreeNode* nodeutil(int valu)
    {
        TreeNode* temp=new TreeNode(0);
        temp->val=valu;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }
    
    TreeNode* bst(vector<int>& pre,vector<int>& in, int start,int end, int& index)
    {
        // int mid=(start+end)/2;
        if(start>end)
            return NULL;
        TreeNode* root=nodeutil(pre[index]);
        index++;
        if(start==end)
            return root;
        int rootx=search(in,root->val,start,end);
        root->left=bst(pre,in,start,rootx-1,index);
        root->right=bst(pre,in,rootx+1,end,index);
        return root;
        
        
    }
    
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0)
            return NULL;
        vector<int> in;
        in=preorder;
        sort(in.begin(),in.end());
        int index=0;
        return bst(preorder,in,0,preorder.size()-1,index);
        
    }
};