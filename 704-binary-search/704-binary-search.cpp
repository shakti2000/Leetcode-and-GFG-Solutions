class Solution {
public:
    int calc(vector<int>& nums,int s,int l,int target){
        int mid=s+(l-s)/2;
        if(nums[mid]==target)return mid;
        if(s>=l)return -1;
        if(nums[mid]>target)l=mid-1;
        else s=mid+1;
        cout<<l;
        return calc(nums,s,l,target);
    }
    int search(vector<int>& nums, int target) {
        int s=0;
        int l=nums.size()-1;
        int ans=calc(nums,s,l,target);
        return ans;
    }
};