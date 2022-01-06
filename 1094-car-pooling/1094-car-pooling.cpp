class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>t;
        for(int i=0;i<trips.size();i++){
            t[trips[i][1]]+=trips[i][0];
            t[trips[i][2]]-=trips[i][0];
        }
        int inc=0;
        for(auto it=t.begin();it!=t.end();it++){
            inc+=it->second;
            if(inc>capacity){
                return false;
            }
        }
    return true;
    }
};