class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp=nums[0];
        int vote=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==temp)vote++;
            else{
                vote--;
                if(vote==0){
                    temp=nums[i];
                    vote=1;
                }
            }
        }
    return temp;}
};