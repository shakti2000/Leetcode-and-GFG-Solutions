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
    void cals(TreeNode* root,int &ans, int low, int high){
        if(root==NULL)return ;        
        if(root->val>=low&&root->val<=high)ans+=root->val;
        cals(root->right,ans,low,high);
        if(root->val<low)return ;
        cals(root->left,ans,low,high);
        
        return;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
         cals(root,ans,low,high);
    return ans;}
};