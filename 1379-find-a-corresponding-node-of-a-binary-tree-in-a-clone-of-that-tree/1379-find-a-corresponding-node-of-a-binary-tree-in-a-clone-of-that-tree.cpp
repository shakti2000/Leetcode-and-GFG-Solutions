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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*>orig;
        queue<TreeNode*>clo;
        orig.push(original);
        clo.push(cloned);
        while(orig.size()){
            TreeNode*ori=orig.front();
            TreeNode*cl=clo.front();
            orig.pop();
            clo.pop();
            if(ori==target)return cl;
            if(ori->right!=NULL){orig.push(ori->right);clo.push(cl->right);}
            if(ori->left!=NULL){orig.push(ori->left);clo.push(cl->left);}
        }
        return NULL;
    }
};