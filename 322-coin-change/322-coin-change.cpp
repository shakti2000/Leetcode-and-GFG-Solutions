class Solution {
public:
    int helper(vector<int>& coins,int amountl,vector<int>& dp,int i){
       // cout<<i<<","<<amountl<<endl;
        if(amountl<0)return 100000008;
        if(amountl==0)return 0;
        if(dp[amountl]!=-1)return dp[amountl];
        int ans=100000009;
        for(int j=0;j<coins.size();j++){
            ans=min(ans,1+helper(coins,amountl-coins[j],dp,j));
           // if(ans!=100000009)break;
        }
       return dp[amountl]=ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
      //  int ans=100000009;
        vector<int>dp(amount+1,-1);
        int ans= helper(coins,amount,dp,0);
        if(ans==100000009)return -1;
        else return ans;
    }
};