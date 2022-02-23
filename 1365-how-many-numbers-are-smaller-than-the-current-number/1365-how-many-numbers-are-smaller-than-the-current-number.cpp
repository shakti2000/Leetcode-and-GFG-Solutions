class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         
        vector<int>ans;
        int t=0;
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(int i=0;i<nums.size();i++){
            for(auto it:mp){
                if(it.first==nums[i])break;
                t+=it.second;
            }
            ans.push_back(t);
            t=0;
            }
        
    return ans;}
};