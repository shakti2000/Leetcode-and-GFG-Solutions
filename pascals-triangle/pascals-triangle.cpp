class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>s(numRows);
        for(int i=0;i<numRows;i++){
            s[i].resize(i+1);
            s[i][0]=1;
            s[i][i]=1;
            for(int j=1;j<i;j++){
                s[i][j]=s[i-1][j-1]+s[i-1][j];
            }
        }
        return s;
}};