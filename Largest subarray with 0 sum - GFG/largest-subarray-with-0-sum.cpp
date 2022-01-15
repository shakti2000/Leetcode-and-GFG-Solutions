// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        int ml=0;
        int cs=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            cs+=nums[i];
            if(cs==0){
                ml=max(ml,i+1);
            }else if(mp.count(cs)){
                ml=max(ml,i-mp[cs]);
            }else{
                mp[cs]=i;
            }
        }
    return ml;
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends