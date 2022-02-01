class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int n=prices.size();
        int minp=prices[0];
        int max=0;
        for(int i=1;i<n;i++){
            if(prices[i]<minp){
                minp=prices[i];
            }else if(prices[i]-minp>max){
                max=prices[i]-minp;
            }
            }
        return max;
    }
};