class Solution {
public:
   
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int cs=0;
        priority_queue<int, vector<int>, greater<int>> pq;
        int i;
        for( i=1;i<heights.size();i++){
            int z=heights[i]-heights[i-1];
            //cout<<i<<","<<z<<","<<ans<<endl;
            if(z<=0){continue;}
            pq.push(z);
            if(pq.size()<=ladders){
                continue;
            } else{
                cs+=pq.top();
                pq.pop();
              //  cout<<cs<<","<<i<<endl;
                if(cs>bricks){
                    i--;
                    break;
                }
            }
        }
        if(i==heights.size())i--;
        return i;
    }
};