class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>rown(matrix.size(),1);
        vector<int>cn(matrix[0].size(),1);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    rown[i]=0;
                    cn[j]=0;
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(rown[i]==0||cn[j]==0)matrix[i][j]=0;
            }}
        
        //return matrix;
    }
};