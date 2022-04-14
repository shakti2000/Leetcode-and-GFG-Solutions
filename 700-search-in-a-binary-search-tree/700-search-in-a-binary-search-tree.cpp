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
    void traverser(unordered_map<int,TreeNode*>&mp,TreeNode*root){
        if(root==NULL)return ;
        mp[root->val]=root;
        traverser(mp,root->right);
        traverser(mp,root->left);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        unordered_map<int,TreeNode*>mp;
        traverser(mp,root);
        if(mp.find(val)==mp.end())return NULL;
        else return mp[val];
    }
};