class Solution {
public:
    bool helper(vector<int>& nums,vector<int>& side,int j,int sl){
        if(j==nums.size())return true;
        bool ans=false;
        for(int i=0;i<4;i++){
            if(side[i]+nums[j]<=sl){
                side[i]+=nums[j];
                ans|=helper(nums,side,j+1,sl);
                if(ans==true)return true;
                side[i]-=nums[j];
            }
        }
        return ans;
    }
    bool makesquare(vector<int>& nums) {
        int maxele=INT_MIN;
        int sum=0;
        for(auto it:nums){
            sum+=it;
            maxele=max(maxele,it);
        }
        if(sum%4!=0||maxele>(sum/4))return false;
        sort(nums.rbegin(),nums.rend());
        vector<int>side(4,0);
        bool ans=false;
        ans|=helper(nums,side,0,sum/4);
        return ans;
    }
};