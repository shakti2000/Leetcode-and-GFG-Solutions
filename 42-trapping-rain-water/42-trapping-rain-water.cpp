class Solution {
public:
    int trap(vector<int>& nums) {
        int ans=0;
        int mh=0,mhi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mh){
                mh=nums[i];
                mhi=i;
            }
        }
        int cmh=0;
        for(int i=0;i<mhi;i++){
        if(cmh<nums[i]){
            cmh=nums[i];
        }else{
            ans+=(cmh-nums[i]);
        }
        }
         cmh=0;
        for(int i=nums.size()-1;i>mhi;i--){
        if(cmh<nums[i]){
            cmh=nums[i];
        }else{
            ans+=(cmh-nums[i]);
        }}
        return ans;
    }
    
};