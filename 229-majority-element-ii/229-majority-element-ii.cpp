class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
      map<int,int>l;
        for(int i=0;i<nums.size();i++){
            l[nums[i]]++;
        }
        for(auto it:l){
            if(it.second>(nums.size()/3))ans.push_back(it.first);
        }
    return ans;
    }
};