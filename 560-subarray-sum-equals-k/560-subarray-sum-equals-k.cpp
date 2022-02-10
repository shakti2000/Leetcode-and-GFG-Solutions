class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        
        int ps=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
        ps+=nums[i];
        int temp=ps-k;
            if(ps==k)ans++;
        if(mp.find(temp)!=mp.end()){
            ans+=mp[temp];
        }
        mp[ps]++;}
        return ans;
    }
};