class Solution {
public:
    int countOrders(int n) {
        int m=1e9+7;
        int prev=1;
        for(long long i=2;i<=n;i++)
        {
            int x=(((i%m)*(2*i-1)%m)%m*(prev%m))%m;
            prev=x;
        }
        return prev;
    }
};