class Solution {
public:
    void calc(vector<vector<char>> &grid,int row,int col,int i,int j){
        if(i>(row-1)||j>(col-1)||(i<0)||(j<0))return;
        if(grid[i][j]=='1'){grid[i][j]='0';
        calc(grid,row,col,i+1,j);
                calc(grid,row,col,i,j+1);
                calc(grid,row,col,i,j-1);
                calc(grid,row,col,i-1,j);
    }}
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){count++;
                                    grid[i][j] = '0';
                calc(grid,row,col,i+1,j);
                calc(grid,row,col,i,j+1);
                calc(grid,row,col,i,j-1);
                calc(grid,row,col,i-1,j);}
            }
        }
    return count;
    }
};