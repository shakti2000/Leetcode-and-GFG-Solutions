// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
// 	void indegreeset(vector<int>adj[i],vector<int>&indegree,vector<int>&cv,int i){
// 	   if(cv[it]==true)return;
// 	    visted[i]=true;
// 	    cv[i]=true;
// 	    for(auto it:adj[i]){
// 	        indegree[it]++;
	        
// 	    }
// 	    cv[i]==false;
// 	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<int>ans;
	    vector<int>indegree(v);
	    for(int i=0;i<v;i++){
	        for(auto it:adj[i]){
	            indegree[it]++;
	        }
	    }
	    queue<int>q;
	    for(auto it=0;it<v;it++){
	        if(indegree[it]==0)q.push(it);
	    }
	    while(q.size()!=0){
	        int u=q.front();
	        ans.push_back(u);
	        q.pop();
	        for(auto it:adj[u]){
	            indegree[it]--;
	            if(indegree[it]==0)q.push(it);
	        }
	    }
	    return ans;
	}
};

// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends