class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose matrix
        size_t n = matrix.size();
        for (size_t i = 0; i < n; i++) {
            for (size_t j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // flip each row
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < n / 2; j++) {
                swap(matrix[i][j], matrix[i][n-1-j]);
            }
        }
    }
};