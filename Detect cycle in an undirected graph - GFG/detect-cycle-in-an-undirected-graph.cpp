// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool dfs(int i,vector<int>adj[],vector<bool>&visited,int parent){
      visited[i]=true;
      for(auto it:adj[i]){
          if(visited[it]==false){
             if( dfs(it,adj,visited,i)==true)
             return true;
          }else if(it!=parent)return true;
      }
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        vector<bool>visited(v+1,false);
        for(int i=0;i<v;i++){
            if(visited[i]==false){
                if(dfs(i,adj,visited,-1)==true)return true;
            }
        }
    
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends