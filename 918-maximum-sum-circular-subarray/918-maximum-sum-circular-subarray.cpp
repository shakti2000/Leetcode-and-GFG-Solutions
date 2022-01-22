class Solution {
public:
    int maxss(vector<int>&nums){
        int cs=0;
        int ms=INT_MIN;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            if(cs>ms)ms=cs;
            if(cs<0)cs=0;
        }
        return ms;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int ansn=maxss(nums);
        int t=0;
        for(int i=0;i<nums.size();i++){
            t+=nums[i];
            nums[i]*=-1;
        }
        if(ansn<0)return ansn;
        int ansi=maxss(nums);
        ansi=t+ansi;
    int ans=max(ansn,ansi);
    
    return ans;}
};