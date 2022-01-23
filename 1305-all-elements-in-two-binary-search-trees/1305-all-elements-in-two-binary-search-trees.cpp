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
    void calc(TreeNode* root,vector<int>&a){
        if(root==NULL)return;
        calc(root->left,a);
        a.push_back(root->val);
        calc(root->right,a);
    }
    vector<int> merge(vector<int>&a,vector<int>&b){
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }else{
                ans.push_back(b[j]);
                j++;
            }
        }
        if(i==a.size()){
            for(int x=j;x<b.size();x++)ans.push_back(b[x]);
            return ans;
        }else{
            for(int x=i;x<a.size();x++)ans.push_back(a[x]);
            return ans;
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>a;
        vector<int>b;
        calc(root1,a);
        calc(root2,b);
        vector<int>ans=merge(a,b);
    return ans;
    }
};