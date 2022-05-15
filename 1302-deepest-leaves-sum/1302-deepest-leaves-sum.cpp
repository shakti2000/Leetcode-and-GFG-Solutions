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
    void traverser(TreeNode*root,map<int,int>&mp,int h){
        if(root==NULL)return;
        mp[h]+=root->val;
        traverser(root->left,mp,h+1);
        traverser(root->right,mp,h+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        map<int,int>mp;
        traverser(root,mp,0);
        auto it=mp.rbegin();
        return it->second;
    }
};