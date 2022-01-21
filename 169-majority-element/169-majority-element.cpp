class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==can){
                count+=1;
            }else{
                count-=1;
            }
            if(count==0){
                can=nums[i];
                count=1;
            }
        }
    return can;
    }
};