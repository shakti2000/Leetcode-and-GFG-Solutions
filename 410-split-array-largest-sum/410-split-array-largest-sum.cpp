class Solution {
public:
    bool helper(vector<int>& nums, int mid,int m){
        int split=1;
        int cs=0;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            if(cs>mid){
                split++;
                cs=nums[i];
            }
        if(split>m)return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int start=*max_element(nums.begin(),nums.end());
        int end=accumulate(nums.begin(),nums.end(),0);
        int mid,ans;
        while(start<=end){
            mid=start+(end-start)/2;
            if(helper(nums,mid,m)){
                end=mid-1;
                ans=mid;
            }else{
                start=mid+1;
            }
        }
    return ans;}
};