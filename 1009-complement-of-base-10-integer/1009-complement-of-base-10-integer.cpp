class Solution {
public:
    int bitwiseComplement(int n) {
      if(n==0)return 1;
        int temp=n;
        vector<int>s;
        while(temp>0){
            if(temp%2==0){
               s.push_back(1);
            }else{
                s.push_back(0);
            }
        temp=temp/2;
        }
        int x=1;
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=s[i]*x;
            x*=2;
        }
    return ans;
    }
};