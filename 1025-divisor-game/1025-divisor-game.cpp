class Solution {
public:
    
    int dp[1001];
    int help(int n){
        if(n==1)return 0;
        if(dp[n]!=-1)return dp[n];
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
            if(help(n-i)==0){
                dp[n]=1;
                return 1;}
        }
    }
        dp[n]=0;
    return 0;
}
    bool divisorGame(int n) {
    memset(dp,-1,sizeof dp);
        return help(n);
    }
};