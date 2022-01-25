class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int>s;
        for(int i=0;i<points.size();i++){
            s.insert(points[i][0]);
            
        }
        int maxa=0;
        int ca=0;
        auto it=s.end();
        it--;
        auto begin=s.begin();
        while(begin!=it){
            int start=*begin;
            begin++;
            ca=*begin-start;
            if(ca>maxa)maxa=ca;
            
        }
        return maxa;
    }
};