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
    void solve(vector<vector<int>>&vv, TreeNode *root, int targetSum, vector<int>v){
        if(root==NULL)
        {
            return;
        }
        v.push_back(root->val);
        if(root->left==NULL && root->right==NULL && root->val==targetSum)
        {
            vv.push_back(v);
            return;
        }
        solve(vv, root->left, targetSum-root->val, v);
        solve(vv, root->right, targetSum-root->val, v);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>x;
        solve(ans, root, targetSum, x);
        return ans;
    }
};