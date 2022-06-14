class Solution {
public:
    int minDistance(string a, string b) {
        int n = a.size();
        int m = b.size();
        int dp[n+1][m+1];
        for (int i = 0; i <= n; ++i)
            for (int j = 0; j <= m; ++j)
                if (!i || !j)
                    dp[i][j] = 0;
                else if (a[i-1] == b[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        return n+m-2*dp[n][m];
    }
};