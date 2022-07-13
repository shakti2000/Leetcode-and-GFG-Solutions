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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        while(q.size()!=0){
            vector<int>temp;
        queue<TreeNode*>q1;
            while(q.size()!=0){
                TreeNode* tempn=q.front();
                q.pop();
                if(tempn!=NULL)temp.push_back(tempn->val);
                if(tempn->left!=NULL){
                    q1.push(tempn->left);
                    
                }
                if(tempn->right!=NULL){
                    q1.push(tempn->right);
                    //temp.push_back(tempn->val);
                }
            }
                while(q1.size()>0){
                    q.push(q1.front());
                    q1.pop();
                
            }
            ans.push_back(temp);
        }
        return ans;
    }
};