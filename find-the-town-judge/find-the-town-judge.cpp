class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)return n;
        vector<int>ttt(n+1);
        vector<int>ttg(n+1);
        int judgen=-1;
        int tj=0;
        for(int i=0;i<trust.size();i++){
           // cout<<trust[i][0]<<","<<trust[i][1]<<endl;
            
            ttg[trust[i][0]]++;
            ttt[trust[i][1]]++;
        }
         for(int i=1;i<=n;i++){
             if((ttg[i]==0)&&(ttt[i]==(n-1))){
                 tj++;
                 judgen=i;
             }
         }
    if(tj==0){
        return -1;
    }else if(tj==1){
        return judgen;
    }else{
        return -1;
    }
}};