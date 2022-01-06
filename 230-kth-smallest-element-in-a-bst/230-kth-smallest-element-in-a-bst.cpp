class Solution {
public:
    int num;
    void help(TreeNode* root,int k,int&i)
    {
        if(root==NULL) return ;
        
        help(root->left,k,i);
        if(i==k)
        {
          num = root->val;   
        }
        i++;
        help(root->right,k,i);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        int i=1;
        help(root,k,i);
        return num;    
    }
};