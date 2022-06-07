class Solution {
public:
    int helper(map<int,int>&mp,int target,int lj,int total, vector<vector<int>>&dp){
        if(total==target)return 1;
        if(total>target||total<0||lj==0)return 0;
        int i=mp[total];
        //cout<<lj<<","<<total<<endl;
      if(dp[i][lj]!=-1)return dp[i][lj];
        int ans=0;
        for(int j=-1;j<=1;j++){
            if(mp.find(total+lj+j)!=mp.end()){
                ans=max(ans,helper(mp,target,lj+j,total+lj+j,dp));
                if(ans==1)return dp[i][lj]=1;
            }
        }
        return dp[i][lj]=ans;
    }
    bool canCross(vector<int>& stones) {
        if(stones.size()==2){
            if(stones[0]==0&&stones[1]==1)return true;
            else return false;
        }
        if(stones[1]!=1||stones[0]!=0)return false;
        vector<vector<int>>dp(stones.size()+1,vector<int>(stones.size()+1,-1));
        map<int,int>mp;
        for(int i=0;i<stones.size();i++){
           mp[stones[i]]=i;
        }
        int target=*(stones.rbegin());
        int ans=0;
        int lj=1;
        int total=1;
        for(int i=-1;i<=1;i++){
            if(mp[total+lj+i]!=0){
                ans=max(ans,helper(mp,target,lj+i,total+lj+i,dp));
                if(ans==1)return true;
            }
        }
    return false;
    }
    
};