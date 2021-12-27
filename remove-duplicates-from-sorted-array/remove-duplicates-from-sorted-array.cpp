class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            if(nums[s]!=nums[i]){
                swap(nums[s+1],nums[i]);
                s++;
            }
        }
        if(nums.size()==0)
                return s;
        else
            return s+1;
    }
};