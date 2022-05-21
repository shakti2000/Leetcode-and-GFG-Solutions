class Solution {
public:
    void print(vector<int>&nums){
        for(auto it:nums)cout<<it<<',';
        cout<<endl;
    }
    int helper(vector<int>& nums,int amountl,vector<int>& dp){
        if(amountl<0)return 100000009;
        if(amountl==0)return 0;
        if(dp[amountl]!=-1)return dp[amountl];
        int ans=100000009;
        for(int i=0;i<nums.size();i++){
            ans= min(ans,1+helper(nums,amountl-nums[i],dp));
        }
        return dp[amountl]=ans;
    }
    int coinChange(vector<int>& nums, int amount) {
        sort(nums.rbegin(),nums.rend());
       // print(nums);
        vector<int>dp(amount+1,-1);
        int ans= helper(nums,amount,dp);
        if(ans>=100000009)return -1;
        else return ans;
    }
};