class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
            if(mp.find(target-nums[i])!=mp.end()){
                if(mp[target-nums[i]]!=i){
                    ans.push_back(mp[target-nums[i]]+1);
                    ans.push_back(i+1);
                    return ans;
                }else{
                    if(nums[i]==nums[i+1]){
                        ans.push_back(i+1);
                        ans.push_back(i+2);
                        return ans;
                    }
                }
            }
        }
    return ans;
    }
};