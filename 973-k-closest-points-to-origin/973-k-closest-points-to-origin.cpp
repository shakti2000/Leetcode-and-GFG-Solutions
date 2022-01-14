class Solution {
public:
    int dis(int a,int b){
        return a*a+b*b;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        vector<vector<int>>res;
        for(int i=0;i<points.size();i++){
            
                pq.push({dis(points[i][0],points[i][1]),{points[i][0],points[i][1]}});
        if(pq.size()>k){
            pq.pop();
        }
        }
        while(!pq.empty())
        {
            vector<int>temp;
            temp.push_back(pq.top().second.first);
            temp.push_back(pq.top().second.second);
            res.push_back(temp);
            pq.pop();
        }
    return res;}
};