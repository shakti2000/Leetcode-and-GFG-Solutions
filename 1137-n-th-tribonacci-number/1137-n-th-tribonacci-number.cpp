class Solution {
public:
    map<int,int>shakti;
    int checker(int n){
           if( shakti.count(n) != 0) return shakti.at(n);
        int ans = checker(n-1) + checker(n-2) + checker(n-3);
        shakti[n] = ans;
        return ans; 
        }
    int tribonacci(int n) {
     if(n==0)return n;
        shakti[0]=0;
        shakti[1]=1;
        shakti[2]=1;
        
        return checker(n); 
    }
};