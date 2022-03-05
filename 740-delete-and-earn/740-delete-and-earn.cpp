class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int,int>freq;
        for(int i=0;i<nums.size();i++) freq[nums[i]]++;     
        vector<int>dp(1e4+1,0);
        dp[0]=0; dp[1]=1*freq[1];
        for(int i=2;i<=1e4;i++){
            dp[i]=max(dp[i-2]+(i*freq[i]),dp[i-1]);
        }
        return dp[1e4];
    }
};