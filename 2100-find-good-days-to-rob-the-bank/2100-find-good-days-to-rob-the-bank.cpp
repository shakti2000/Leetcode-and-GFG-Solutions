class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
      int n=security.size();
        if(time==0){
            vector<int>ans(n);
            for(int i=0;i<n;i++){
                ans[i]=i;
            }
            return ans;
        }
        vector<int>ans;
        vector<int>kam(n,0);
        vector<int>jada(n,0);
        int temp=time-1;
        for(int i=1;i<n-1;i++){
            if(security[i]<=security[i-1]){
                if(temp>0)temp--;
                else{
                    kam[i]=1;
                }
            }else{
                temp=time-1;
            }
        }
        //for(int i=0;i<n;i++)cout<<kam[i]++;
        temp=time-1;
        for(int i=n-1;i>=1;i--){
            if(security[i]>=security[i-1]){
                if(temp>0)temp--;
                else{
                    jada[i-1]=1;
                }
            }else{
                temp=time-1;
            }
        }
        
        for(int i=0;i<n;i++){
            if(kam[i]==1&&jada[i]==1){
                ans.push_back(i);
            }
        }
     //   for(int i=0;i<n;i++)cout<<jada[i];
   //cout<<endl;
        return ans;
    }
};