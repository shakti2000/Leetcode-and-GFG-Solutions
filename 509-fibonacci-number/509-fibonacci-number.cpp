class Solution {
public:
    int fib(int n) {
        vector<int>ans(31);
        ans[1]=1;
        ans[2]=1;
        for(int i=3;i<=30;i++)ans[i]=ans[i-1]+ans[i-2];
        return ans[n];
    }
};