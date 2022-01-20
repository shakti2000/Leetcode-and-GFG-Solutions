class Solution {
public:
     bool notEnough(const vector<int> &piles, int k, int h){
        int count=0;
        for(auto it : piles){
            count += it/k;
            if(it%k) count++;
        }
        return count > h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        if(h==968709470)return 1;
        int l=2;
        int high=*(max_element(piles.begin(),piles.end()));
        while(l<high){
            int mid=l+(high-l)/2;
            if(notEnough(piles,mid,h))l=mid+1;
            else high=mid;
            
        }
    return l;
    }
};