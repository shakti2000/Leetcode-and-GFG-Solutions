class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>nums1=nums;
        sort(nums1.begin(),nums1.end());
        unordered_map<int,int>mp;
        int temp=nums[0];
        for(int i=0;i<nums1.size();i++){
           if(mp.find(nums1[i])==mp.end())
            mp[nums1[i]]=i;
            
        }
        vector<int>ans;
        for(auto it:nums){
            ans.push_back(mp[it]);
        }
        return ans;
    }
};