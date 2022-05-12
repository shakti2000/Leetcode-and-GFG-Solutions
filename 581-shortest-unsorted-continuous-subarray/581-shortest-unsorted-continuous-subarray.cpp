class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int i=0,j=nums.size()-1;
        while(nums[i]==temp[i]){
            i++;
            if(i==nums.size())break;
        }
        while(nums[j]==temp[j]){j--;if(j<0)break;}
        if(i>j)return 0;
        return j-i+1;
    }
};