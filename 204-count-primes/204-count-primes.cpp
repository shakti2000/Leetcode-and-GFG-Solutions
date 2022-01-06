class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1)return 0;
        
        int ans=0;
        vector<bool>isPrime(n+1,true);
        for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=2*i;j<=n;j=j+i){
                    isPrime[j]=false;
                }
            }
        }
    return count(isPrime.begin(), isPrime.end()-1, true)-2;
    }
};