class Solution {
public:
    int minDistance(string a, string b) {
        int n = a.size();int m = b.size();int d[n+1][m+1];
        for (int i = 0; i <= n; ++i)
            for (int j = 0; j <= m; ++j)
                if (!i || !j)
                    d[i][j] = 0;
                else if (a[i-1] == b[j-1])
                    d[i][j] = 1+d[i-1][j-1];
                else
                    d[i][j] = max(d[i-1][j], d[i][j-1]);
        return n+m-2*d[n][m];
    }
};