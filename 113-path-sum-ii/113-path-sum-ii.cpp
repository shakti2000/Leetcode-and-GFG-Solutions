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