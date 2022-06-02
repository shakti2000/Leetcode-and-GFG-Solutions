class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& nums) {
        vector<vector<int>>ans(nums[0].size(),vector<int>(nums.size()));
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                ans[j][i]=nums[i][j];
            }
        }
    return ans;}
};