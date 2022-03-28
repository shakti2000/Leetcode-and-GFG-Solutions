class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        auto it= find(nums.begin(),nums.end(),target);
        if(it==nums.end())return false;
        else return true;
    }
};