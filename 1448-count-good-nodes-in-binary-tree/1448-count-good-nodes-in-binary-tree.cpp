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
    int helper(TreeNode*root,int temp){
        if(root==NULL)return 0;
        if(root->val<temp){
            return helper(root->left,temp)+helper(root->right,temp);
        }else{
            return 1+helper(root->left,root->val)+helper(root->right,root->val);
        }
        return 0;
    }
    int goodNodes(TreeNode* root) {
        int ans=0 ;
        ans=helper(root,root->val);
        return ans;
    }
};