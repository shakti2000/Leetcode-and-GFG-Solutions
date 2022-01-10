class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>s(nums.size()+1,1);
        //s[0]=0;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]=0;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==1)return i;
        }
    return 0;
    }
};