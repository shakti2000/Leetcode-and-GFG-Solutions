// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int kThSmallestFactor(int N , int K) {
        int c=0;
        if(K==1) {
           return 1;
       } else if(N<K) {
           return -1;
       }
     for(int i=1;i<=N;i++) {
           if(N%i==0){
               c++;
           }
           if(c==K){
               return i;
           } else if(c>K) {
               return -1;
           }
       }
       
       return -1;
   }

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;

        Solution ob;
        cout << ob.kThSmallestFactor(N,K) << endl;
    }
    return 0;
}  // } Driver Code Ends