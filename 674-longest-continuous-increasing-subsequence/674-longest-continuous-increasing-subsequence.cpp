class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size()<2) 
            return nums.size();
        int ans=0;
        int count=1;
        for(int i=1;i<nums.size();i++) {
            if(nums[i]>nums[i-1]) 
            {
                count++;
            }
            else 
            {
                ans = max(ans,count);
                count=1;
            }
            
        }
        return max(ans,count);
    }
};