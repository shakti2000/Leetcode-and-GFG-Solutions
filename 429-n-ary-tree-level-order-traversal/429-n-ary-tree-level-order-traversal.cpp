/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)return vector<vector<int>>{};
        vector<vector<Node*>>ansr;
        vector<vector<int>>ans;
        queue<Node*>q;
       q.push(root);
        while(q.size()!=0){
            vector<Node*>temp={};
            while(q.size()!=0){
                Node*temp1=q.front();
                temp.push_back(temp1);
                q.pop();
            }
            for(auto it:temp){
                for(auto x:it->children){
                q.push(x);}
            }
            ansr.push_back(temp);
        }
        for(int i=0;i<ansr.size();i++){
            vector<int>temp;
            for(int j=0;j<ansr[i].size();j++){
                temp.push_back(ansr[i][j]->val);
            }
            ans.push_back(temp);
        }
    return ans;}
};