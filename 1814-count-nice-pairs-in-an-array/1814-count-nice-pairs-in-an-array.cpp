class Solution {
public:
    long long mod=1000000007;
    int reve(int x){
        //cout<<x;
        stack<int>rev;
        while(x>0){
            rev.push(x%10);
            x/=10;
        }
        long long m=1;
        int ans=0;
        while(!rev.empty()){
            int temp=rev.top()*m;
            ans+=temp;
            m*=10;
            rev.pop();
        }
      return ans;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
           
              int temp=nums[i]-reve(nums[i]);
              if(mp[temp]!=0){ans=(ans%mod+mp[temp]%mod)%mod;}
              mp[temp]++;
        }
    return ans;
    }
};