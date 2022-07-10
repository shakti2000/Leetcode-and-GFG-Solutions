class Solution {
public:
    long long helper(vector<int>& cost,vector<int>& dp,int i){
        if(i>=cost.size())return 0;
        if(dp[i]!=-1)return dp[i];
        long long ans=INT_MAX;
        ans=min(ans,cost[i]+helper(cost,dp,i+1));
        ans=min(ans,cost[i]+helper(cost,dp,i+2));
        return dp[i]=ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        long long ans=INT_MAX;
            ans=min(ans,helper(cost,dp,0));
        ans=min(ans,helper(cost,dp,1));
        return ans;
    }
};