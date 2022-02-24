class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
       int inf=100000001;
        if(amount==0)
            return 0;
       int dp[amount+1];
        for(int i=0;i<amount+1;i++)
            dp[i]=inf;
        for(int i=0;i<amount+1;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(i==coins[j])
                    dp[i]=1;
                else if(i>coins[j])
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
            }
        }
        if(dp[amount]!=inf)
            return dp[amount];
        else
            return -1;
        
    }
};