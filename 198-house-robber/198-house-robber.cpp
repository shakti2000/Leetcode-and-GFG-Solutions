class Solution {
public:
    int helper(vector<int>& dp,vector<int>& nums,int i){
        if(i>=nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int a=nums[i]+helper(dp,nums,i+2);
        int b=nums[i]+helper(dp,nums,i+3);
        return dp[i]=max(a,b);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        vector<int>dp(nums.size()+1,-1);
        int ans=helper(dp,nums,0);
        int ans1=helper(dp,nums,1);
        return max(ans,ans1);
    }
};