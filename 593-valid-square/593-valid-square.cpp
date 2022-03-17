class Solution {
public:
    	int dis(vector<int> p1,vector<int> p2){
        return ((p1[0]-p2[0])*(p1[0]-p2[0])) + ((p1[1]-p2[1])*(p1[1]-p2[1]));
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<int> s;
        s.insert(dis(p1,p2));s.insert(dis(p1,p3));s.insert(dis(p1,p4));
        s.insert(dis(p2,p3));s.insert(dis(p2,p4));
        s.insert(dis(p3,p4));
        return s.size()==2?(s.find(0)!=s.end()?false:true):false ;
    }
};