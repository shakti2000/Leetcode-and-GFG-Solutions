class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res (rowIndex+1, 1);
        for(int i=1; i<rowIndex; i++){
            for(int j=rowIndex-1; j>=i; j--){
                res[j] += res[j+1];
            }
        }
        return res;
    }
};
