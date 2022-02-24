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
    void heightfinder(TreeNode*root,int h,int target,int &h1){
        if(root==NULL)return ;
        if(root->val==target){h1=h;return ;}
        
            heightfinder(root->left,h+1,target,h1);
        heightfinder(root->right,h+1,target,h1);
        
    }
    void parentfinder(TreeNode*root,int parent,int target,int &p1){
        if(root==NULL)return ;
        if(root->val==target){p1=parent;return ;}
         parentfinder(root->left,root->val,target,p1);
            parentfinder(root->right,root->val,target,p1);
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x||root->val==y)return false;
        int p1,p2;
        int h1,h2;
        parentfinder(root,root->val,x,p1);
        parentfinder(root,root->val,y,p2);
        heightfinder(root,0,x,h1);
        heightfinder(root,0,y,h2);
       // cout<<h1<<","<<h2<<","<<p1<<","<<p2<<endl;
        if(h2==h1&&p1!=p2)return true;
        else return false;
    }
};