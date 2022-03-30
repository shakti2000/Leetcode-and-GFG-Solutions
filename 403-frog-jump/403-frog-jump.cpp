class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        if(stones[1]!=1) return false;
        int dp[2002][2002];
        memset(dp,-1,sizeof dp);
        return solve(1,1,n-1,stones,dp);
    }
    bool solve(int i, int k, int n, vector<int>& stones, int dp[2002][2002]) {
        if(i==n) return true;
        if(dp[i][k]!=-1) return dp[i][k];
        bool jumpOne=false,jumpTwo=false,jumpThree=false;
        auto x=find(stones.begin()+i,stones.end(),stones[i]+k);
        if(x!=stones.end()) jumpOne = true & solve(i+(x-(stones.begin()+i)),k,n,stones,dp);
        x=find(stones.begin()+i,stones.end(),stones[i]+k+1);
        if(x!=stones.end()) jumpTwo = true & solve(i+(x-(stones.begin()+i)),k+1,n,stones,dp);
        if(k-1>0) {
            x=find(stones.begin()+i,stones.end(),stones[i]+k-1);
            if(x!=stones.end()) jumpThree = true & solve(i+(x-(stones.begin()+i)),k-1,n,stones,dp);
        }
        return dp[i][k] = jumpOne | jumpTwo | jumpThree;
    }
};