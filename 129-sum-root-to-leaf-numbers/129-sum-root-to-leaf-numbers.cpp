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
    void helper(TreeNode*root,int &ans,int curs){
        if(root==NULL)return;
        if(root->left==NULL&&root->right==NULL){
            curs*=10;
        curs+=root->val;
            ans+=curs;
            //cout<<curs<<endl;
            return;
        }
        curs*=10;
        curs+=root->val;
        helper(root->left,ans,curs);
        helper(root->right,ans,curs);
        
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        int curs=0;
        helper(root,ans,curs);
        
    return ans;}
};