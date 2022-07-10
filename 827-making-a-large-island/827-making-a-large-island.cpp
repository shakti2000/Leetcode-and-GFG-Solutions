class Solution {
public:
    int area(vector<vector<int>>& grid,int i,int j,map<int,int>&mp){
        if(i>=grid.size()||j>=grid[0].size()||i<0||j<0)return 0;
        int ans=0;
        set<int>st;
        if(i+1<grid.size()){
        st.insert(grid[i+1][j]);
        ans+=mp[ grid[i+1][j] ];
        }
        if(j+1<grid[0].size()&&st.find(grid[i][j+1])==st.end()&&grid[i][j+1]!=0){
            ans+=mp[grid[i][j+1]];
        st.insert(grid[i][j+1]);
        }
        if(i-1>=0&&st.find(grid[i-1][j])==st.end()&&grid[i-1][j]!=0){
            ans+=mp[grid[i-1][j]];
        st.insert(grid[i-1][j]);
        }
        if(j-1>=0&&st.find(grid[i][j-1])==st.end()&&grid[i][j-1]!=0){
            ans+=mp[grid[i][j-1]];
        }
        return ans;
    }
    int idgiver(vector<vector<int>>& grid,int i,int j,int id){
        if(i>=grid.size()||j>=grid[0].size()||i<0||j<0)return 0;
        if(grid[i][j]!=1)return 0;
        grid[i][j]=id;
        int ans=1;
        ans+=idgiver(grid,i+1,j,id);ans+=idgiver(grid,i-1,j,id);
        ans+=idgiver(grid,i,j-1,id);ans+=idgiver(grid,i,j+1,id);
        return ans;
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int id=2;
        map<int,int>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!=1)continue;
                else{
                    mp[id]=idgiver(grid,i,j,id);
                    id++;
                }
            }
        }
        if(id==2)return 1;
        if(id==3){
            if(mp[2]==(n*n))return n*n;
            else return mp[2]+1;
        }
        int maxarea=1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]!=0)continue;
                else{
                   maxarea=max(maxarea,1+area(grid,i,j,mp));
                }
            }
        }
        return maxarea;
    }
};