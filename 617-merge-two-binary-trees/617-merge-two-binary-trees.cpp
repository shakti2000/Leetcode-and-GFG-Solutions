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
    TreeNode* newNode(TreeNode* root1, TreeNode* root2){
        if(root1==NULL&&root2==NULL){
        TreeNode* n=NULL;
            return n;
        }
        if(root1==NULL){
        TreeNode* n=new TreeNode(root2->val);
        TreeNode*x=NULL;
            n->left=newNode(root2->left,x);
        n->right=newNode(root2->right,x);
        return n;}
        if(root2==NULL){
            TreeNode*x=NULL;
        TreeNode* n=new TreeNode(root1->val);
        n->left=newNode(root1->left,x);
        n->right=newNode(root1->right,x);
        return n;}
        TreeNode* n=new TreeNode(root1->val+root2->val);
        n->left=newNode(root1->left,root2->left);
        n->right=newNode(root1->right,root2->right);
    return n;}
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL&&root2==NULL){
        TreeNode* n=NULL;
            return n;
        }
        if(root1==NULL){
        TreeNode* n=new TreeNode(root2->val);
        TreeNode*x=NULL;
            n->left=newNode(root2->left,x);
        n->right=newNode(root2->right,x);
        return n;}
        if(root2==NULL){
            TreeNode*x=NULL;
        TreeNode* n=new TreeNode(root1->val);
        n->left=newNode(root1->left,x);
        n->right=newNode(root1->right,x);
        return n;}
        TreeNode* n=new TreeNode(root1->val+root2->val);
        n->left=newNode(root1->left,root2->left);
        n->right=newNode(root1->right,root2->right);
    
    return n;}
};