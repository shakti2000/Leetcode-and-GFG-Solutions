class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& nums) {
        vector<vector<int>>preq(n);
        vector<int>indegree(n);
        //vector<bool>visited(n,false);
        //vector<bool>curr(b,false);
        for(auto x:nums){
        preq[x[1]].push_back(x[0]);
            indegree[x[0]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            
            if(indegree[i]==0)
            q.push(i);
        }
        vector<int>ans;
        while(q.size()){
            int x=q.front();
          //  cout<<x<<",";
            ans.push_back(x);
            q.pop();
            for(auto it:preq[x]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);             
            }
            }
        //cout<<q.size()<<","<<n;
       if(ans.size()!=n)ans.clear();
    return ans;    }
    
};