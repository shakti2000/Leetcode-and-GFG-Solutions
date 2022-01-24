class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            cout <<i<<endl;
            if(nums[i][0]==target)return true;
            if(nums[i][nums[i].size()-1]==target)return true;
            if(nums[i][nums[0].size()-1]<target){
            
                continue;
            }
            if(nums[i][nums[0].size()-1]>target&&nums[i][0]<target){
                for(int j=0;j<nums[i].size();j++){
                    if(nums[i][j]==target)return true;
                }
            }
            if(nums[i][0]>target){return false;}
        }
        //cout<<"bahar aya";
   return false; }
};