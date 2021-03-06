// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  int safePos(int &n, int &k) {
        vector<int> v(n);
        for(int i=0;i<n;i++)    v[i]=i+1;
        int killHim=0;
        k--;
        while(v.size()>1){
            killHim = (killHim + k)% v.size();
            v.erase(v.begin()+killHim);//O(n) operation -> size of vector
        }
        return v[0];}
    };

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends