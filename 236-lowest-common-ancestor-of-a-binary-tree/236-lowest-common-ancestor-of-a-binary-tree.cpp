/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool contains(TreeNode*root,TreeNode*target){
        if(root==NULL)return false;
        if(root==target)return true;
        return contains(root->left,target)||contains(root->right,target);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode*temp=root;        
        while(1){
            if(contains(temp->left,p)&&contains(temp->left,q)){
                temp=temp->left;
                continue;
            }
            if(contains(temp->right,p)&&contains(temp->right,q)){
                temp=temp->right;
                continue;
            }
            break;
        }
        return temp;
    }
};