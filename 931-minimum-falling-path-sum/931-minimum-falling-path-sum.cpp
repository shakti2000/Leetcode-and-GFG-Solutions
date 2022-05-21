class Solution {
public:
    int helper(vector<vector<int>>& matrix,vector<vector<int>>& dp,int i,int j){
        //cout<<i<<","<<j
        if(i<0||j<0||i>=matrix.size()||j>=matrix.size())return 1000000009;
        if(i==matrix.size()-1)return matrix[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int ans=1000000009;
        for(int x=-1;x<=1;x++){
            ans=min(ans,matrix[i][j]+helper(matrix,dp,i+1,j+x));
        }
        return dp[i][j]=ans;
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix.size(),-1));
        int ans=INT_MAX;
        for(int j=0;j<matrix.size();j++){
        ans=min(ans,helper(matrix,dp,0,j));}
        return ans;
    }
};