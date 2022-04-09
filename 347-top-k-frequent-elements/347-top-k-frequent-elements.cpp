class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto it:nums)mp[it]++;
        vector<pair<int,int>>freq;
        for(auto it:mp){
        freq.push_back({it.second,it.first});    
        }
        sort(freq.rbegin(),freq.rend());
        vector<int>ans;
        int count=0;
        for(auto i=freq.begin();i!=freq.end();i++){
            if(count>=k)break;
            ans.push_back(i->second);
            count++;}
        return ans;
    }
};