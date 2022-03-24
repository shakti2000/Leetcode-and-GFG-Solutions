class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
     sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int ans=0;
        while(i<=j){
            if(nums[i]+nums[j]<=limit){
                i++;
                j--;
                ans++;
            }else{
                j--;
                ans++;
            }
        }
    return ans;}
};