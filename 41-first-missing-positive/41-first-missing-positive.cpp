class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp=1;
        if(nums[0]>1)return 1;
        for(int i=0;i<nums.size();i++){
        if(temp == nums[i]) {
                temp++;
            }
            else if (nums[i] > temp) break;
        }
        return temp;
}
};