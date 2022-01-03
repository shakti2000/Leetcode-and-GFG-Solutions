class Solution {
public:
    void setZeroes(vector<vector<int>> &mat)
{
    int row = mat.size();
int col = mat[0].size();
    vector<int> r1(row);
    vector<int> c1(col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == 0)
            {
                r1[i] = 1;
                c1[j] = 1;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (r1[i] == 1 or c1[j] == 1)
            {
                mat[i][j] = 0;
            }
        }
    }
}
};