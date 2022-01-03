class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
            int n=nums.size();
            if(nums.size()==1||nums[0]!=nums[1])return nums[0];
            if(nums[n-1]!=nums[n-2])return nums[n-1];
        for(int i=1;i<nums.size()-1;i++){
                if(nums[i]!=nums[i-1]&&nums[i]!=nums[i+1]){
                    return nums[i];
                }
            }
       // unordered_set<int>s;
        return 0;
    }
};