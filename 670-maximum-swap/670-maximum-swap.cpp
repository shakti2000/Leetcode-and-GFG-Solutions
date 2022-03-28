class Solution {
public:
    void print(vector<int>nums){
        for(auto it:nums)cout<<it<<",";
        cout<<endl;
    }
    void pusher(set<int>&s,vector<int>&nums){
       //print(nums);
    long long ans=0;
            for(auto it:nums){
                ans+=(it);
            ans*=10;
            }
       // cout<<ans<<endl;
        ans/=10;
        s.insert(ans);
        
    }
    int maximumSwap(int num) {
        set<int>s;
        
        vector<int>nums;
        int temp=num;
        while(temp>0){
            nums.push_back(temp%10);
            temp/=10;
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    swap(nums[i],nums[j]);
                    pusher(s,nums);
                    swap(nums[i],nums[j]);
                }
            }
        }
        if(s.size()==0)return num;
        auto it=s.end();
        it--;
    return *it;}
};