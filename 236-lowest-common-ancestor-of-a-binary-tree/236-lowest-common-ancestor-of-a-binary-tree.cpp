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
    bool present(TreeNode*p,TreeNode*root){
        if(root==NULL)return false;
        if(root==p)return true;
        return present(p,root->left)||present(p,root->right);
    }
   
     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
          while((present(p,root->right)&&present(q,root->right))||(present(p,root->left)&&present(q,root->left))){
           if(present(p,root->right)&&present(q,root->right)){
               root=root->right;
           }
        if(present(p,root->left)&&present(q,root->left)){
        root=root->left;
        }
        
       }
    //    if(present(p,root->left)&&present(q,root->left)){
    //        while(present(p,root->left)&&present(q,root->left)){
    //            root=root->left;
    //        }
    //    }
    //     if(present(p,root->right)&&present(q,root->right)){
    //        while(present(p,root->right)&&present(q,root->right)){
    //            root=root->right;
    //        }
    //    }
        
 return root;   }
};