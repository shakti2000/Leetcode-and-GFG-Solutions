class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>s;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(s[nums[i]]!=0)ans+=s[nums[i]];
             s[nums[i]]++;
        }
    return ans;
    }
};