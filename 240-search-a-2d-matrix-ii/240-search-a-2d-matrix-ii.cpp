class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int i=0,j=nums[0].size()-1;
        while(i<nums.size()&&j>=0){
            if(nums[i][j]==target)return true;
            
            else if(nums[i][j]>target){
                j--;                
            }else{
                i++;
            }
        }
        return false;
    }
};