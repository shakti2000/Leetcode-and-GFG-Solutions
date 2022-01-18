class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>temp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
            if(board[i][j]=='.')continue;
                if(temp.find(board[i][j])!=temp.end()){
                   
                    return false;}
                temp.insert(board[i][j]);
                
            }
            temp.clear();
        }
        for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[j][i]=='.')continue;
                if(temp.find(board[j][i])!=temp.end()){
                   
                    return false;}
                temp.insert(board[j][i]);
            }
            temp.clear();
        }
        temp.clear();
        for(int i=0;i<8;i=i+3){
            for(int j=0;j<8;j=j+3){
                for(int z=i;z<i+3;z++){
                   for(int y=j;y<j+3;y++){
                       if(board[z][y]=='.')continue;
                       if(temp.find(board[z][y])!=temp.end()){
                           cout<<"block"<<i<<j;
                           return false;}
                       temp.insert(board[z][y]);
                   }
                }
                temp.clear();
            }
        }
        return true;
    }
};