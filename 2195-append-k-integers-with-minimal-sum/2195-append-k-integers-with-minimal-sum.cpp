class Solution {
public:
    #define ll long long
    long long minimalKSum(vector<int>& nums, int k) {
        ll n=nums.size();
        ll sum=((ll)k*((ll)k+1))/2,c=0;
           unordered_map<ll,ll>mp;
           for(auto x:nums)
           {
               if(x<=k&&mp[x]==0)
               {
                   sum-=x;
                   c++;
               }
               mp[x]++;
           }
           for(int i=k+1;i<=k+n+1;i++)
           {
               if(c==0)
                   break;
               if(mp[i]==0)
               {
                   sum+=i;
                   c--;
               }
           }
           
           return sum;
       }
};