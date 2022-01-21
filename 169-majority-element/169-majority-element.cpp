class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can=nums[0];
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==can){
                count++;
            }else{
                count--;
            }
            if(count==0){
                can=nums[i];
                count=1;
            }
        }
    return can;
    }
};