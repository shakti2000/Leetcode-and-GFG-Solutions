class Solution {
public:
    map<int,vector<int>> m;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            m[nums[i]].push_back(i);
    }
    int pick(int target) {
        int n = m[target].size(),r = rand()%n;
        return m[target][r];
    }
};