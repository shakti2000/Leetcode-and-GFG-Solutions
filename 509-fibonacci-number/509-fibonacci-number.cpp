class Solution {
public: 
       int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        vector <int> shakti(n+1,0);
            shakti[1]=1;
            for(int i=2;i<=n;i++){
                shakti[i]=shakti[i-1]+shakti[i-2]; 
             }
           return shakti[n];
       }
};