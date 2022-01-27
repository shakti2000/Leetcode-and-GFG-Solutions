// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
      int count(int N){
       // code here
       if(N==0){
           return 1;
       }
       int ans=0;
       for(int i=0;i<N;i=i+2){
           ans+=count(i)*count(N-2-i);
       }
       return ans;
   }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.count(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends