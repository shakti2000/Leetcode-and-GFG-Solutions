class Solution {
public:
    int helper(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& dp){
        //cout<<i<<","<<j<<endl;
        if(i>=grid.size()||j>=grid[0].size()||grid[i][j]==1)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(i==grid.size()-1&&j==grid[0].size()-1)return 1;
        return dp[i][j]=helper(i+1,j,grid,dp)+helper(i,j+1,grid,dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums[0].size(),-1));
        return helper(0,0,nums,dp);
    }
};