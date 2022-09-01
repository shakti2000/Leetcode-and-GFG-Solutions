class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& temp,vector<vector<int>>& heights){
     //  cout<<i<<","<<j<<endl;
        if(temp[i][j]!=0)return;
        temp[i][j]=1;
        if(i-1>=0&&heights[i-1][j]>=heights[i][j]){
            dfs(i-1,j,temp,heights);
        }
        if(j-1>=0&&heights[i][j-1]>=heights[i][j]){
            dfs(i,j-1,temp,heights);
        }
        if(i+1<heights.size()&&heights[i+1][j]>=heights[i][j]){
            dfs(i+1,j,temp,heights);
        }
        if(j+1<heights[0].size()&&heights[i][j+1]>=heights[i][j]){
            dfs(i,j+1,temp,heights);
        }
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        vector<vector<int>>atlantic(n,vector<int>(m,0));
        vector<vector<int>>pacific(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            dfs(i,0,pacific,heights);
            dfs(i,m-1,atlantic,heights);
        }
        for(int j=0;j<m;j++){
            dfs(0,j,pacific,heights);
            dfs(n-1,j,atlantic,heights);
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(atlantic[i][j]&&pacific[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
            return ans;
    }
};