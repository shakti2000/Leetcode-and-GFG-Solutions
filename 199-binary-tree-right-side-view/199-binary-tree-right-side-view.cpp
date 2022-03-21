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
    void traverser(TreeNode* root,vector<int>&ans,int h,unordered_set<int>&s){
        if(root==NULL)return;
        if(s.find(h)==s.end()){
            s.insert(h);
            ans.push_back(root->val);
        }
        traverser(root->right,ans,h+1,s);
        traverser(root->left,ans,h+1,s);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        unordered_set<int>s;
        traverser(root,ans,0,s);
        return ans;
    }
};