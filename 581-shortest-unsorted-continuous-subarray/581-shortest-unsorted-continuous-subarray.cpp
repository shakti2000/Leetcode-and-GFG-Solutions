class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> nums2 = nums;
        sort(nums.begin(), nums.end());
        int left = 0, right = 0;
        for(int i = 0; i<nums2.size(); i++){
            if(nums[i]!=nums2[i]){
                left = i;
                break;
            }
        }
        for(int i = nums2.size()-1; i>=0; i--){
            if(nums[i]!=nums2[i]){
                right = i;
                break;
            }
        }
        if(right==0 && left==0){
            return 0;
        }
        return right-left+1;
    }
};