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
    void calch(TreeNode*root,int &mh,int ch){
        if(root==NULL)return;
        if(ch>mh)mh=ch;
        calch(root->left,mh,ch+1);
        calch(root->right,mh,ch+1);
    }
    void calcs(TreeNode*root,int &ans,int mh,int ch){
        if(root==NULL )return;
        if(mh==ch)ans+=root->val;
        calcs(root->left,ans,mh,ch+1);
        calcs(root->right,ans,mh,ch+1);
        return;
    }
    int deepestLeavesSum(TreeNode* root) {
        if(root->left==NULL&&root->right==NULL)return root->val;
            int mh=0;
        int ch=0;
        calch(root,mh,ch+1);
        int ans=0;
        calcs(root,ans,mh,ch+1);
        return ans;
    }
};