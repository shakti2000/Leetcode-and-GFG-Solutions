class Solution {
public:
    string getSmallestString(int n, int k) {
        unordered_map<int,char>mp;
        int temp=1;
        for(char i='a';i<='z';i++){
            mp[temp]=i;
            temp++;
        }
        vector<char>ansv(n,'a');
        int num=k;
        num-=n;
        int i=ansv.size()-1;
            while(i>=0&&num>0){
                if(num>25){
                    ansv[i]='z';
                    num-=25;
                    i--;
                    continue;
                }else{
                    num++;
                    ansv[i]=mp[num];
                    num=0;
                }
            }
        string ans="";
        for(auto it:ansv){
            ans+=it;
        }
        return ans;
    }
};