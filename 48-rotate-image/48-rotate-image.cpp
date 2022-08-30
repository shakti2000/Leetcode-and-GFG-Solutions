class Solution {
public:
    void set(vector<vector<int>>& matrix,vector<vector<int>>& ans,int i){
        int y=(matrix.size()-1)-i;
        int x=0;
        int j=0;
        while(j<matrix.size()){
            ans[x][y]=matrix[i][j];
            j++;x++;
        }
        
    }
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix.size(),vector<int>(matrix[0].size(),0));
        for(int i=0;i<matrix.size();i++){
            set(matrix,ans,i);
        }
        matrix=ans;
    }
};