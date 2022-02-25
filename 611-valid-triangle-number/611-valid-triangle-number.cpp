class Solution {
public:
    bool checker(int a,int b,int c){
        if(a+b>c&&b+c>a&&a+c>b)return true;
        else return false;
    }
    int triangleNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                    int temp=nums[i]+nums[j];
                    auto it=lower_bound(nums.begin(),nums.end(),temp);
                    int total=it-nums.begin();
                    if(total-j-1>0)ans+=total-j-1;                            
            }
        }
    return ans;}
};