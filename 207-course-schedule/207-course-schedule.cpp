class Solution {
public:
    bool dfs(vector<bool>&visited,vector<bool>&visitedthiscycle,vector<vector<int>>&preq,int i){
        visited[i]=true;
        visitedthiscycle[i]=true;
        for(auto it:preq[i]){
            if(visited[it]==false){
            if(dfs(visited,visitedthiscycle,preq,it)==false)return false;
            } else if(visitedthiscycle[it]==true)return false;
        }
        visitedthiscycle[i]=false;
        return true;
    }
    bool canFinish(int numCourses, vector<vector<int>>& nums) {
        int n=numCourses;
        vector<vector<int>>preq(n+1);
        
        for(auto it:nums){
            preq[it[0]].push_back(it[1]);
        }
        
        vector<bool>visited(n+1,false);
        vector<bool>visitedthiscycle(n+1,false);
        for(int i=0;i<n;i++){
            if(visited[i]==false){
            if(dfs(visited,visitedthiscycle,preq,i)==false)return false;
        }}
        return true;
    }
};