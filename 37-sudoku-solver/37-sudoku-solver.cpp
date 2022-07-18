class Solution {
public:
    map<int,set<char>>row;
        map<int,set<char>>column;
        map<pair<int,int>,set<char>>block;
    bool isValid(int i,int j,char c){
        if(row[i].find(c)!=row[i].end())return false;
        if(column[j].find(c)!=column[j].end())return false;
        if(block[{i/3,j/3}].find(c)!=block[{i/3,j/3}].end())return false;
        //cout<<i<<","<<j<<","<<c<<endl;
         row[i].insert(c);
                column[j].insert(c);
                block[{i/3,j/3}].insert(c);
        return true;
    }
    bool solver(vector<vector<char>>& board){
        bool ans=false;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(i,j,c)){
                            board[i][j]=c;
                            ans|=solver(board);
                            if(ans==true)return true;
                            row[i].erase(c);
                column[j].erase(c);
                block[{i/3,j/3}].erase(c);
                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        
            for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]=='.')continue;
                row[i].insert(board[i][j]);
                column[j].insert(board[i][j]);
                block[{i/3,j/3}].insert(board[i][j]);
            }
        }
        bool ans=solver(board);
        return ;
        
    }
};