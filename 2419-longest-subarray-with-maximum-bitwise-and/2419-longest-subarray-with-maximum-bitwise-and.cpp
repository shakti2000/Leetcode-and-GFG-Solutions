class Solution {
public:
    int longestSubarray(vector<int>& nums) {
       int check=*max_element(nums.begin(),nums.end());
        int cs=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==check){
                cs++;
                ans=max(ans,cs);
            }else{
                cs=0;
            }
        }
        return ans;
    }
};