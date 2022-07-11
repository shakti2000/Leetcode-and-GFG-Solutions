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
    void traverser(TreeNode* root,int h,map<int,int>&mp){
        if(root==NULL)return ;
        if(mp.find(h)==mp.end())mp[h]=root->val;
        traverser(root->right,h+1,mp);
        traverser(root->left,h+1,mp);
    }
    vector<int> rightSideView(TreeNode* root) {
       int h=0;
        map<int,int>mp;
        traverser(root,h,mp);
        vector<int>ans;
        for(auto it:mp)ans.push_back(it.second);
        return ans;
    }
};