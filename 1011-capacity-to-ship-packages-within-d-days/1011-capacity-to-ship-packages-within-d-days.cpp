class Solution {
public:
    bool ok(vector<int>& weights, int d, int mid){
        int cur = 0;
        for(int i:weights){
            if(i > mid) return 0;
            else if(cur+i <= mid) cur += i;
            else cur = i, --d;
        }
        return d >= 1;
    }
    
    int shipWithinDays(vector<int>& weights, int D) {
        int hi = INT_MAX, lo = 1, ans;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(ok(weights, D, mid)){
                ans = mid;
                hi = mid-1;
            } else
                lo = mid+1;
        }
        return ans;
    }
};