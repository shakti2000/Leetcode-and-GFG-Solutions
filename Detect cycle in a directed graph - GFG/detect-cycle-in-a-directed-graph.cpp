// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool dfs( vector<int> adj[],vector<bool>&visited,vector<bool>&bt,int i){
        visited[i]=true;
        bt[i]=true;
        for(auto it:adj[i]){
            if(visited[it]==false){
                if(dfs(adj,visited,bt,it)==true)return true;
                
            }else if(bt[it]==true)return true;
        }
        bt[i]=false;
        return false;
    }
    bool isCyclic(int v, vector<int> adj[]) {
        vector<bool>visited(v,false);
        vector<bool>bt(v,false);
        for(int i=0;i<v;i++){
            if(visited[i]==false){
                if(dfs(adj,visited,bt,i)==true)return true;
            }
        }
    return false;}
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends