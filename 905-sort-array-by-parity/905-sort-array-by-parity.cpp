class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for(auto it:nums){
            if(it%2==0)even.push_back(it);
            else odd.push_back(it);
        }
        vector<int>ans;
        for(auto it:even)ans.push_back(it);
        for(auto it:odd)ans.push_back(it);
    return ans;}
};