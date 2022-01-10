class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        n=(n*(n+1))/2;
        int ts=0;
        for(int i=0;i<nums.size();i++){
            ts+=nums[i];
        }
        
    return n-ts;
    }
};