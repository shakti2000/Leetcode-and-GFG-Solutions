class Solution {
public:
    int calc(vector<int>& nums,int s,int l, int &target){
        
        int mid=s+(l-s)/2;
        if(nums[mid]==target)return mid;
        if(s>=l)return -1;
        if(nums[mid]>target)l=mid-1;
        else s=mid+1;
        return calc(nums,s,l,target);
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0){vector<int>ans(2,-1);return ans;}
        vector<int>ans;
        int s=0;
        int l=nums.size()-1;
        int mid=calc(nums,s,l,target);
        if(mid==-1){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int flag=0;
        int si=mid-1;
        while(si>=0){
            if(nums[si]!=nums[mid]){
                ans.push_back(si+1);
                break;
                flag=1;
            }
            si--;
        }
         if(nums[0]==nums[mid])ans.push_back(0);
        int ei=mid+1;
        while(ei<nums.size()){
            if(nums[ei]!=nums[mid]){
                ans.push_back(ei-1);
                cout<<ei;
                break;
            }
            ei++;
        }
        if(nums[nums.size()-1]==nums[mid])ans.push_back(nums.size()-1);
   return ans;
    }
};