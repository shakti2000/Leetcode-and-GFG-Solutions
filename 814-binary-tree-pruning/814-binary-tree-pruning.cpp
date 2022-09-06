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
    bool search(TreeNode*root){
        bool ans=false;
        if(root==NULL)return false;
        if(root->val==1)ans=true;
        if(search(root->left)==false){
            root->left=NULL;
        }else{
            ans=true;
        }
        if(search(root->right)==false){
            root->right=NULL;
        }else{
            ans=true;
        }
        return ans;
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(search(root->left)==false){
            root->left=NULL;
        }
        if(search(root->right)==false){
            root->right=NULL;
        }
        if(root->val==0&&(root->left==NULL)&&root->right==NULL)return NULL;
        return root;
    }
};