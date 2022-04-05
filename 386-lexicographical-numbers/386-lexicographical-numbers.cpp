class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>v1;
        vector<int>ans;
        for(int i=1;i<=n;i++){
            v1.push_back(to_string(i));
        }
        sort(v1.begin(),v1.end());
        for(auto it:v1){
            ans.push_back(stoi(it));
        }
        return ans;
    }
};