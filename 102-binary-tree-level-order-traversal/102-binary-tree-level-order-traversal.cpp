class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        
        int level=0;
        queue<pair<TreeNode*,int>> q;
        q.emplace(root,level);
        vector<vector<int>> res;
        vector<int> tmp;
        
        while(!q.empty()) {
            
            if(q.front().first->left) q.emplace(q.front().first->left,q.front().second+1);
            if(q.front().first->right) q.emplace(q.front().first->right,q.front().second+1);
            
            if(q.front().second!=level) {
                res.push_back(move(tmp));
                ++level;
            }
            tmp.push_back(q.front().first->val);
            q.pop();
        }
        res.push_back(move(tmp));
        
        return res;
    }
};