class Solution {
public:
    void visit(vector<bool>&help,vector<vector<int>>& rooms,int i){
        if(help[i]==true)return;
        help[i]=true;
        for(int j=0;j<rooms[i].size();j++){
            visit(help,rooms,rooms[i][j]);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>help(rooms.size(),false);
        visit(help,rooms,0);
        for(auto it:help){
            if(it==false)return false;
        }
    return true;}
};