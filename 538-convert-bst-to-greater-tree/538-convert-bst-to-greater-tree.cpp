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
    void putter(TreeNode*root,unordered_map<int,int>&mp){
        if(root==NULL)return;
        putter(root->left,mp);
        root->val=mp[root->val];
        putter(root->right,mp);
    }
    void traverse(vector<int>&bst,TreeNode*root){
        if(root==NULL)return;
        traverse(bst,root->right);
        bst.push_back(root->val);
        traverse(bst,root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL)return root;
        vector<int>bst;
        traverse(bst,root);
        vector<int>psum(bst.size(),0);
        psum[0]=bst[0];
        for(int i=1;i<bst.size();i++){
            psum[i]=psum[i-1]+bst[i];
        }
        unordered_map<int,int>mp;
        for(int i=0;i<bst.size();i++){
            mp[bst[i]]=psum[i];
        }
        putter(root,mp);
        return root;
    }
};