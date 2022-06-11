class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(x==0)return 0;
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total==x)return nums.size();
        int z=total-x;
        int ans=0,wl=0,ws=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            ws+=nums[i];
            if(ws>z){
                while(ws>z&&i>j){
                    ws-=nums[j];
                    j++;
                }
            }
            wl=i-j+1;
            if(ws==z){
                if(ans<wl)ans=wl;
            }
        }
        if(ans==0)return -1;
        else return nums.size()-ans;
    }
};