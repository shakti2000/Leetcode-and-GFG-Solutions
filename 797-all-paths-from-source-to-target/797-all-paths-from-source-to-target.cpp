class Solution {
public:
    void pathfinder(vector<vector<int>>& grid,vector<vector<int>>&ans,vector<int>temp,int j,int target){
        temp.push_back(j);
        if(j==target)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<grid[j].size();i++){
            pathfinder(grid,ans,temp,grid[j][i],target);
        }
    } 
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        int target=grid.size()-1;
        //vector<vector<bool>>visited;
        vector<int>temp;
        temp.push_back(0);
        for(int i=0;i<grid[0].size();i++){
            pathfinder(grid,ans,temp,grid[0][i],target);
        }
    return ans;}
};