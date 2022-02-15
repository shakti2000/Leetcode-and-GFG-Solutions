class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)return 0;
        sort(nums.begin(),nums.end());
        int md=INT_MIN;
        for(int i=1;i<nums.size();i++){
            int temp=nums[i]-nums[i-1];
            if(temp>md)md=temp;
        }
    return md;}
};