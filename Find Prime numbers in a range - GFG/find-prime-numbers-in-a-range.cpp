// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  bool checkPrime(int a){
      if(a==1)return false;
      if(a==2)return true;
      if(a==3)return true;
      if(a%2==0||a%3==0)return false;
        for (int i = 5; i * i <= a; i += 6)
        if (a % i == 0 || a % (i + 2) == 0)
            return false;
       return true;
   }
  
    vector<int> primeRange(int m, int n) {
    vector<int>ans;
    for(int i=m;i<=n;i++){
        if(checkPrime(i))ans.push_back(i);
    }
    return ans;}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends