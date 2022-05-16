class Solution {
private:
    struct Pos {
        int row;
        int col;
        int dist;
    };
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        queue<Pos> q;
        q.push(Pos{0, 0, 1});
        
        while (!q.empty()) {
            Pos front = q.front(); q.pop();
            
            if (front.row >= n || front.row < 0 ||
                front.col >= n || front.col < 0 ||
                grid[front.row][front.col] == 1) {
                continue;
            } else if (front.row == n-1 && front.col == n-1) {
                return front.dist;
            }
            
            q.push(Pos{front.row+1, front.col, front.dist+1});
            q.push(Pos{front.row+1, front.col+1, front.dist+1});
            q.push(Pos{front.row+1, front.col-1, front.dist+1});
            q.push(Pos{front.row, front.col+1, front.dist+1});
            q.push(Pos{front.row, front.col-1, front.dist+1});
            q.push(Pos{front.row-1, front.col, front.dist+1});
            q.push(Pos{front.row-1, front.col+1, front.dist+1});
            q.push(Pos{front.row-1, front.col-1, front.dist+1});
            
            grid[front.row][front.col] = 1;
        }
        
        return -1;
    }
};