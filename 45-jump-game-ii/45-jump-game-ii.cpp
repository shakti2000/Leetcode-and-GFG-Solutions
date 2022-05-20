class Solution {
public:
    int helper(vector<int>& nums,int pos,vector<int>& dp){
        if(pos>=nums.size())return 10000009;
        
        if(pos==nums.size()-1)return 0;
        if(dp[pos]!=-1)return dp[pos];
        int ans=100000009;
        for(int j=1;j<=nums[pos];j++){
           // cout<<j+pos<<endl;
            if(j+pos>=nums.size())break;
            ans=min(ans,1+helper(nums,pos+j,dp));
            
        }
        return dp[pos]=ans;
    }
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        vector<int>dp(nums.size()+1,-1);
        int ans=INT_MAX;
        int steps=1;
        for(int i=1;i<=nums[0];i++){
           // cout<<i<<":"<<endl;
            ans=min(ans,helper(nums,i,dp));
        }
        
    return ans+1;}
};