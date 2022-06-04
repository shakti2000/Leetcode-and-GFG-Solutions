// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  int calc(int n,vector<int>&helper,vector<int>&dp){
      if(n==1)return helper[1];
      if(dp[n]!=-1)return dp[n];
      int ans=helper[n];
      for(int i=1;i<n;i++){
          ans=max(ans,calc(n-i,helper,dp)+calc(i,helper,dp));
      }
      return dp[n]=ans;
  }
    int cutRod(int price[], int n) {
        vector<int>helper(n);
        for(int i=0;i<n;i++){
            helper[i]=price[i];
        }
        vector<int>dp(n+1,-1);
        helper.insert(helper.begin(),0);
        int ans=helper[n];
        for(int i=1;i<n;i++){
            ans=max(ans,calc(n-i,helper,dp)+calc(i,helper,dp));
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends