class Solution {
public:
    int rfind(int i,int j,vector<vector<int>>& grid){
        int ans=0;
        int temp=i;
        while(i<grid.size()){
            if(ans<grid[i][j])ans=grid[i][j];
            i++;
        }
        while(temp>=0){
            if(ans<grid[temp][j])ans=grid[temp][j];
            temp--;
        }
        return ans;
    }
    int cfind(int i,int j,vector<vector<int>>& grid){
        int ans=0;
        int temp=j;
        while(j<grid[0].size()){
            if(ans<grid[i][j])ans=grid[i][j];
            j++;
        }
        while(temp>=0){
            if(ans<grid[i][temp])ans=grid[i][temp];
            temp--;
        }
        return ans;
    }
    int maxIncreaseKeepingSkyline(vector<vector<int>>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                int rowm=rfind(i,j,nums);
                int colm=cfind(i,j,nums);
                int h=min(rowm,colm);
                ans+=h-nums[i][j];
            }
        }
    return ans;}
};