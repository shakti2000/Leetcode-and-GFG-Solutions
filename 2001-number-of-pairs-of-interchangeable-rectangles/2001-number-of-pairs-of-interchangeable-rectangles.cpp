class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& nums) {
        long long ans=0;
        unordered_map<double,int>mp;
        for(int i=0;i<nums.size();i++){
            double a=nums[i][0]*1.0;
            double b=nums[i][1]*1.0;
            double temp=a/b;
            //cout<<temp;
            if(mp[temp]!=0)ans+=mp[temp];
            mp[temp]++;
        }
    return ans;
    }
};