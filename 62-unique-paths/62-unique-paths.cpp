class Solution {
public:
    int check(int cm,int cn,int m,int n,vector<vector<int>>&dp){
        if(cm==m&&cn==n){
            return 1;
        }
        if(cm>m||cn>n)return 0;
        if(dp[cm][cn]!=-1)return dp[cm][cn];
        return dp[cm][cn]=check(cm+1,cn,m,n,dp)+check(cm,cn+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int cm=0;
        int cn=0;
        return check(0,0,m-1,n-1,dp); 
    }
};