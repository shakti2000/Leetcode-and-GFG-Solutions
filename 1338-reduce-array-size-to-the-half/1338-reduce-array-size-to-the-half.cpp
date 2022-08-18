class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>freq;
        for(auto it:arr)freq[it]++;
        vector<int>nums;
        for(auto it:freq)nums.push_back(it.second);
        int total=arr.size();
        int ct=total;
        int ans=0;
        sort(nums.rbegin(),nums.rend());
        for(auto it:nums){
            ct-=it;
            ans++;
            if(ct<=(total/2)){
                //cout<<ct<<",r"<<total;
                return ans;}
        }
        return 0;
    }
};