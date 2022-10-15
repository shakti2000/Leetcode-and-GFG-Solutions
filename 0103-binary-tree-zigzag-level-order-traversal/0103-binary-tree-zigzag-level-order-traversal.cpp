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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        stack<TreeNode*>st;
        st.push(root);
        int flag=1;
        while(st.size()>0){
            stack<TreeNode*>temp;
            vector<int>tempans;
            while(st.size()>0){
                tempans.push_back(st.top()->val);
                if(flag==1){
                    if(st.top()->left!=NULL)temp.push(st.top()->left);
                    if(st.top()->right!=NULL)temp.push(st.top()->right);
                }else{
                    if(st.top()->right!=NULL)temp.push(st.top()->right);
                    if(st.top()->left!=NULL)temp.push(st.top()->left);
                }
                st.pop();
            }
            st=temp;
                if(flag==1)flag=0;
                else flag=1;
            ans.push_back(tempans);
        }
        return ans;
    }
};