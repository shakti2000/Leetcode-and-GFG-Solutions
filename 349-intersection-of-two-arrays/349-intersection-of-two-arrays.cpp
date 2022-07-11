class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1;
        for(auto it:nums1)st1.insert(it);
        set<int>st2;
        vector<int>ans;
        for(auto it:nums2){
            if(st1.find(it)!=st1.end())st2.insert(it);
        }
        for(auto it:st2)ans.push_back(it);
        return ans;
    }
};