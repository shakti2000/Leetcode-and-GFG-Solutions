class Solution {
public:
    vector<vector<int>> dp;
    int findinc(int r,int c,vector<vector<int>> &matrix)
    {
        if(dp[r][c]>0)return dp[r][c];
        int curr=matrix[r][c];
        int m=0;
        if(r+1<matrix.size() && matrix[r+1][c]>curr)
            m=max(m,findinc(r+1,c,matrix));
        if(r-1>=0 && matrix[r-1][c]>curr)
            m=max(m,findinc(r-1,c,matrix));
        if(c+1<matrix[0].size() && matrix[r][c+1]>curr)
            m=max(m,findinc(r,c+1,matrix));
        if(c-1>=0 && matrix[r][c-1]>curr)
            m=max(m,findinc(r,c-1,matrix));
        dp[r][c]=m+1;
        return m+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size()==0)return 0;
        int n=matrix.size(),m=matrix[0].size();
        int ans=0;
        dp.resize(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int inc=findinc(i,j,matrix);
                ans=max(ans,inc);
            }
        }
        return ans;
    }
};