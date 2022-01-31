class Solution {
public:
    int maximumWealth(vector<vector<int>>& nums) {
        int mx=0;
        for(int i=0;i<nums.size();i++){
            int temp=0;
            for(int j=0;j<nums[i].size();j++){
                temp+=nums[i][j];
            }
            if(temp>mx)mx=temp;
        }
    return mx;
    }
};