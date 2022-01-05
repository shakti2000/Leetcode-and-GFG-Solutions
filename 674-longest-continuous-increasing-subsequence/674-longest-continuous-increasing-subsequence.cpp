class Solution {
public:
    
        int findLengthOfLCIS(vector<int>& nums) {
        int j=0, ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                ans=max(ans,i-j+1);
            }
            else
                j=i;
        }
        return ans==0?1:ans;
    }
    
};