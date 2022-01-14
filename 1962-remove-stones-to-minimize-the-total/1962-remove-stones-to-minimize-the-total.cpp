class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int ts=0;
        for(int i=0;i<piles.size();i++){
            pq.push(piles[i]);
            //ts+=piles[i];        
        }
        while(k--){
            int ele=pq.top();
            int val=(ele/2)+(ele%2!=0);
            pq.pop();
            pq.push(val);
        }
        while(pq.size()!=0){
            ts+=pq.top();
            pq.pop();
        }
   return ts;
    }
};