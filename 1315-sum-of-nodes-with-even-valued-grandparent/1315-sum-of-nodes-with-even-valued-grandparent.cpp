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
    int sumagg(TreeNode*root,int h){
        if(root==NULL )return 0;
        if(h==0){return root->val;}
        else return sumagg(root->left,h-1)+sumagg(root->right,h-1);
    }
    void calc(TreeNode*root,int &ans){
        if(root==NULL) return;
        if(root->val%2==0){
            ans+=sumagg(root->left,1);
            ans+=sumagg(root->right,1);
        }
        calc(root->left,ans);
        calc(root->right,ans);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int ans=0;
        calc(root,ans);
        return ans;
    }
};