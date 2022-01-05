class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int lis[n];
        lis[0]=1;
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                
                if((nums[j]<nums[i])&&(lis[j]>=lis[i])){
                    lis[i] = lis[j] + 1; 
                }
            }
        }
        return *max_element(lis,lis+n);
    }
};