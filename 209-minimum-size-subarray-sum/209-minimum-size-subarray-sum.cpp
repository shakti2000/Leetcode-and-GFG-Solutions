class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0,ans=INT_MAX,ws=0,wl=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>target)return 1;
            ws+=nums[i];
            if(ws>=target){
                while(ws>=target&&j<=i){
                wl=i-j+1;
                if(wl<ans)ans=wl;
                    ws-=nums[j];
                    j++;
                }
            }
        }
        if(ans==INT_MAX)return 0;
        else return ans;
    }
};