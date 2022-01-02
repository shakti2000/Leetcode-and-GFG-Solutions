#include <bits/stdc++.h>
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int n=time.size();
        if(n<=1)return 0;
        long long ans=0;
        vector<int> shakti(60);
        for(int i=0;i<n;i++){
            int temp=time[i]%60;
            shakti[temp]++;
        }
        for(int i=1;i<30;i++){
            ans=ans+(shakti[i]*shakti[60-i]);
        }
        //cout<<shakti[0]<<",";
        int x=(shakti[0]*(shakti[0]-1))/2;
        ans+=x;
        x=(shakti[30]*(shakti[30]-1))/2;
        ans+=x;
        return ans;
    }
};