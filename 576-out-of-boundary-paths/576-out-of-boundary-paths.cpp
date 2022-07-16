class Solution {
public:
    long long helper(int m ,int n ,int maxMove, int i,int j,vector<vector<vector<int>>>&dp){
        if(maxMove<0)return 0;
        if(i<0||j<0||i>=m||j>=n){
            //cout<<i<<","<<j<<","<<maxMove<<endl;
                                 return 1;}
        if(dp[i][j][maxMove]!=-1)return dp[i][j][maxMove];
        long long ans=0;
        ans+=helper(m,n,maxMove-1,i+1,j,dp);
        ans+=helper(m,n,maxMove-1,i-1,j,dp);
        ans+=helper(m,n,maxMove-1,i,j+1,dp);
        ans+=helper(m,n,maxMove-1,i,j-1,dp);
        ans%=1000000007;
        return dp[i][j][maxMove]=ans;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
     if(maxMove==0)return 0;
        vector<vector<vector<int>>>dp(52,vector<vector<int>>(52,vector<int>(52,-1)));
       // int ans=0;
        long long ans=0;
           ans= helper(m,n,maxMove,startRow,startColumn,dp);
        return ans % 1000000007;
    }
};