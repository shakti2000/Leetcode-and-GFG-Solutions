class Solution {
public:
    
    int tribonacci(int n) {
    vector<int>shakti(n+1,0);
        if(n==0){
            return 0;
        }
        if(n==2){
            int x=1;
            return x;
        }
        
        if(n==1){
            int x=1;
            return x;
        }
        shakti[0]=0;
        shakti[1]=1;
        shakti[2]=1;
        for(int i=3;i<=n;i++){
            if(shakti[i]!=0)return shakti[i];
            else{
                int ans=shakti[i-1]+shakti[i-2]+shakti[i-3];
                shakti[i]=ans;
            }
        }
    return shakti[n];
    }
};