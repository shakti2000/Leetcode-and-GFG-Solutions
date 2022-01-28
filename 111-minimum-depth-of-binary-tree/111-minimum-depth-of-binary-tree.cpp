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
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int dep = 0;
        bool check = false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                TreeNode* temp = q.front();
                q.pop();
                int ctr = 0;
                if(temp->left){
                    q.push(temp->left);
                }
                else{
                    ctr++;
                }
                if(temp->right){
                    q.push(temp->right);
                }
                else{
                    ctr++;
                }
                if(ctr == 2){
                    return dep+1;
                    break;
                }
            }
            dep++;
        }
        return dep;
    }
};