class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>rob(nums.size());
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        int ma=0;
        int ans;
        rob[0]=nums[0];
        rob[1]=nums[1];
        rob[2]=nums[0]+nums[2];
        ma=max(rob[2],rob[1]);
        for(int i=3;i<nums.size();i++){
            int ans=max(rob[i-2],rob[i-3])+nums[i];
            rob[i]=ans;
            if(ma<rob[i])ma=rob[i];
        }
    return ma;
    }
};