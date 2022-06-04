class Solution {
public:
    int helper(vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j){
       // cout<<i<<","<<j<<endl;
        if(j<0||j>=grid[0].size())return -1;
        if(i==grid.size())return j;
       if(dp[i][j]!=0)return dp[i][j];
        if(grid[i][j]==-1){
            if( (j-1<0) || (grid[i][j-1] ==1 ) )return dp[i][j]=-1;
            else  return dp[i][j]=helper(grid,dp,i+1,j-1);
        }else {
            if(j+1==grid[0].size()||grid[i][j+1]==-1)return dp[i][j]=-1;
            else  return dp[i][j]=helper(grid,dp,i+1,j+1);
        }
        return 0;
           }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size()+1,vector<int>(grid[0].size()+1,0));
        vector<int> ans;
      
         for(int i=0;i<grid[0].size();i++){
             ans.push_back(helper(grid,dp,0,i));
         }
        return ans;
    }
};