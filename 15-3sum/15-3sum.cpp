class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        if(nums.size()<3)return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])
               continue;
           if(nums[i]>0)break;
            int j=i+1,l=nums.size()-1;
            int target=-nums[i];
            while(j<l){
                if(nums[j]+nums[l]==target){
                    vector<int>temp={nums[i],nums[j],nums[l]};
                    ans.push_back(temp);
                     if(nums[j]==nums[l])
                        break;
                    int x = nums[j],y= nums[l];
                        while(x==nums[j])
                        {
                            j++;
                        }
                        while(y==nums[l]){
                            l--;
                        }
                }else if(nums[j]+nums[l]>target){
                    l--;
                }else{
                    j++;
                }
            } 
                    
        }
    return ans;
    }
};