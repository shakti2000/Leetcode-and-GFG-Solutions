class Solution {
public:
    void traverser(vector<vector<int>>&ans,vector<int>& nums,int j){
        if(j==nums.size()){ans.push_back(nums);return ;}
      //  if(j>nums.size())return ;
        for(int i=j;i<nums.size();i++){
            swap(nums[i],nums[j]);
        traverser(ans,nums,j+1);   
            swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        
        traverser(ans,nums,0);
        return ans;
    }
};