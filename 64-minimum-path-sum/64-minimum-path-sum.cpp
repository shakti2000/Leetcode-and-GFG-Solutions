class Solution {
public:
    int helper(vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j){
       // cout<<i<<","<<j<<endl;
        if(i>=grid.size()||j>=grid[0].size())return 100000000;
        if(i==grid.size()-1&&j==grid[0].size()-1)return grid[i][j];
        if(dp[i][j]!=INT_MAX)return dp[i][j];
        int ans=100000000;
        ans=min(ans,grid[i][j]+helper(grid,dp,i+1,j));
        ans=min(ans,grid[i][j]+helper(grid,dp,i,j+1));
        return dp[i][j]=ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size()+1,vector<int>(grid[0].size()+1,INT_MAX));
        int ans=INT_MAX;
        ans=min(ans,helper(grid,dp,0,0));
        return ans;
    }
};