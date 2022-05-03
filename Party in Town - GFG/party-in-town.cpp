// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
     int partyHouse(int N, vector<vector<int>> &adj){
       // code here
       
       queue<int>q;
       vector<bool>visit(N+1,false);
       int ans=INT_MAX;
       for(int i=1;i<=N;++i){
           q.push(i);
           visit[i]=true;
           int count=0;
           while(!q.empty()){
               int size=q.size();
               count++;
               for(int j=0;j<size;++j){
                   int curr=q.front();
                   q.pop();
                   for(auto k:adj[curr]){
                       if(visit[k])continue;
                       q.push(k);
                       visit[k]=true;
                   }
               }
           }
           fill(visit.begin(),visit.end(),false);
           ans=min(ans,(count-1));
       }
       return ans;
   }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, x, y;
        cin>>N;
        vector<vector<int>> adj(N+1);
        for(int i = 0;i < N-1;i++){
            cin>>x>>y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        
        Solution ob;
        cout<<ob.partyHouse(N, adj)<<"\n";
    }
    return 0;
}  // } Driver Code Ends