class Solution {
public:
    void dfs(int i,int j,vector<vector<bool>>&visited, vector<vector<char>>&grid)
   {
        int n=grid[0].size(),m=grid.size(); //size of row and column
       if(i<0 || j<0) return; 
       if(i>=m || j>=n) return;
       if(visited[i][j]) return;
       visited[i][j]=true;
       if(grid[i][j]=='0') return;
       
      
       if(grid[i][j]=='1')
       dfs(i+1,j,visited,grid);
       dfs(i,j+1,visited,grid);
       dfs(i-1,j,visited,grid);
       dfs(i,j-1,visited,grid);
   }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        int ans=0;
            for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(visited[i][j]==false&&grid[i][j]=='1'){
                    ans++;
                    dfs(i,j,visited,grid);
                }
            }
                
        }
  return ans;  }
};