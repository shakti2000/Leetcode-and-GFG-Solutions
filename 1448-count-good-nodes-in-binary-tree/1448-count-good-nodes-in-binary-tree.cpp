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
    void checker(TreeNode*root,vector<TreeNode*>&ans,int ch){
        if(root==NULL)return;
        if(root->val>=ch){
            ans.push_back(root);
            ch=root->val;
        }
        checker(root->left,ans,ch);
        checker(root->right,ans,ch);
    }
    int goodNodes(TreeNode* root) {
        vector<TreeNode*>ans;
        checker(root,ans,root->val);
    return ans.size();
    }
};