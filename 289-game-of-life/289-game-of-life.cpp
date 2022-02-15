class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        int dx[] {-1, -1,  -1,  0, 0,  1, 1 ,1};
        int dy[] {-1,  0,  1,  -1, 1, -1, 0, 1};
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                int livCnt = 0;
                for(int k = 0; k<8; k++) {
                    if(isSafe(i+dx[k], j+dy[k], m, n) && abs(board[i+dx[k]][j+dy[k]]) == 1) livCnt++;
                }
                if(board[i][j] == 1 && (livCnt < 2 || livCnt > 3)) board[i][j] = -1;
                if(board[i][j] == 0 && livCnt == 3) board[i][j] = 2;
            }
        }
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j] == -1) board[i][j] = 0;
                if(board[i][j] == 2) board[i][j] = 1;
            }
        }
    }
    
private:
    bool isSafe(int x, int y, int m, int n) {
        return (x >=0 && x < m && y >=0 && y < n);
    }    
};