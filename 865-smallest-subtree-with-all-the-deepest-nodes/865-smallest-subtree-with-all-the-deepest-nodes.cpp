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
    bool contains(TreeNode*root,TreeNode*target){
        if(root==NULL)return false;
        if(root==target)return true;
        return contains(root->left,target)||contains(root->right,target);
    }
    void dfs(TreeNode*root,map<int,set<TreeNode*>>&mp,int height){
        if(root==NULL)return ;
        mp[height].insert(root);
        dfs(root->left,mp,height+1);
        dfs(root->right,mp,height+1);
    }
    bool helper(TreeNode*root,set<TreeNode*>st){
        for(auto it:st){
            if(contains(root,it)==false)return false;
        }
        return true;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
         map<int,set<TreeNode*>>mp;
        dfs(root,mp,1);
        auto it=mp.rbegin();
        set<TreeNode*>st=it->second;
        //it--;
        TreeNode*temp=root;
        while(1){
            if(helper(temp->left,st)){
                temp=temp->left;
                continue;
            }
            if(helper(temp->right,st)){
                temp=temp->right;
                continue;
            }
            break;
        }
    return temp;
        
    }
};