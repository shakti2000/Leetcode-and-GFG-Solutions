class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans;
        int ts=0;
        for(int i=0;i<nums.size();i++){
            ts+=nums[i];
            ans.push_back(ts);
        }
    return ans;
    }
};