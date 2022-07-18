class Solution {
public:
    void helper(vector<vector<int>>& grid,int steps,int i,int j,int fi,int fj,int &ans){
       // cout<<i<<","<<j<<endl;
        if(i==fi&&j==fj){
            if(steps==-1){
                ans+=1;
                return ;
            }else{
                return ;
            }
        }
        if(steps<-1)return ;
        if(i>=grid.size()||j>=grid[0].size()||i<0||j<0)return ;
        
        if(grid[i][j]==-1)return ;
        grid[i][j]=-1;
        helper(grid,steps-1,i+1,j,fi,fj,ans);
        helper(grid,steps-1,i,j+1,fi,fj,ans);
        helper(grid,steps-1,i-1,j,fi,fj,ans);
        helper(grid,steps-1,i,j-1,fi,fj,ans);
        grid[i][j]=0;
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        int ans=0;
        int steps=0;
        int si,sj,fi,fj;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
             //   cout<<i<<","<<j<<endl;
                if(grid[i][j]==-1)continue;
                if(grid[i][j]==1){
                    si=i;
                    sj=j;
                }
                if(grid[i][j]==2){
                    fi=i;
                    fj=j;
                }
                if(grid[i][j]==0)steps++;
            }
        }
        helper(grid,steps,si,sj,fi,fj,ans);
        return ans;
    }
};