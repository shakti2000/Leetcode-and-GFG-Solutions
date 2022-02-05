// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
   static bool func(tuple<int,int,int> t1,tuple<int,int,int> t2) {
    return get<2>(t1)<get<2>(t2);
}

int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<vector<int>> v(V,vector<int> (V,0));
        vector<tuple<int,int,int>> t;
        vector<int> dummy;
        for(int i=0;i<V;i++) {
            for(int j=0;j<adj[i].size();j++) {
                dummy=adj[i][j];
                if(v[i][dummy[0]]==0) {
                    v[i][dummy[0]]=1;
                    v[dummy[0]][i]=1;
                    t.push_back(make_tuple(i,dummy[0],dummy[1]));
                }
            }
        }
        sort(t.begin(),t.end(),func);
        int sum=0;
        vector<int> parent(V,-1);
        for(int i=0;i<t.size();i++) {
            int v1,v2,p1,p2;
            v1=get<0>(t[i]);
            v2=get<1>(t[i]);
            p1=v1;
            p2=v2;
            while(parent[p1]>=0) {
                p1=parent[p1];
            }
            while(parent[p2]>=0) {
                p2=parent[p2];
            }

            if(p1==p2) continue;
            else {
                sum+=get<2>(t[i]);
                if(abs(parent[p1])>=abs(parent[p2])) {
                    parent[p1]+=parent[p2];
                    parent[p2]=p1;
                }
                else {
                    parent[p2]+=parent[p1];
                    parent[p1]=p2;
                }
            }
        }
        return sum;}
};

// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}

  // } Driver Code Ends