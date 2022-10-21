class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<k&&i<nums.size();i++){
            if(mp[nums[i]]==1)return true;
            mp[nums[i]]++;
        }
        int z=0;
        for(int i=k;i<nums.size();i++){
            if(mp[nums[i]]==1)return true;
            mp[nums[i]]++;
            mp[nums[z]]--;
            z++;
        }
        return false;
    }
};