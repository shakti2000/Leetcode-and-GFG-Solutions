class Solution {
public:
    int dfs(vector<vector<int>>& nums,vector<vector<int>>& dp,int i,int j){
       // cout<<i<<","<<j<<endl;
        if(i>=nums.size())return 100000009;
        if(j>=nums[i].size())return 100000009;
        if(i==nums.size()-1)return nums[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=1000000009;
        for(int x=0;x<2;x++){
            ans=min(ans,nums[i][j]+dfs(nums,dp,i+1,j+x));
        }
        return dp[i][j]=ans;
    }
    int minimumTotal(vector<vector<int>>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        int ans=INT_MAX;
        int i=0;
        int j=0;
        if(nums.size()==1)return nums[0][0];
        for(int x=0;x<2;x++){
            ans=min(ans,nums[i][j]+dfs(nums,dp,i+1,j+x));
        }
        return ans;
    }
};