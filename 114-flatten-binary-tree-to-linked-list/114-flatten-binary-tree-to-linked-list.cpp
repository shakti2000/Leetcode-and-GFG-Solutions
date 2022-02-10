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
    void pretav(TreeNode* root,vector<int>&s){
        if(root==NULL)return ;
        s.push_back(root->val);
        pretav(root->left,s);
        pretav(root->right,s);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)return ;
        vector<int>s;
        TreeNode*head=root;
        pretav(root,s);
        root->val=s[0];
        root->left=NULL;
        for(int i=1;i<s.size();i++){
                TreeNode* n=new TreeNode(s[i]);
            root->right=n;
            root=root->right;
            }
        }
    //return head;}
};