class Solution {
public:
bool PredictTheWinner(vector<int>& nums) {
    int n =nums.size();
    vector<vector<int>> dp(n,vector<int>(n,-1));
    for(int i=0;i<n;i++)    dp[i][i] = nums[i];
    for(int s=n-2;s>=0;s--)
        for(int e=s+1;e<n;e++)
        {
            int start = nums[s] - dp[s+1][e];
            int end = nums[e] - dp[s][e-1];
            dp[s][e] = max(start,end);
        }
    return dp[0][n-1]>=0;
}
};