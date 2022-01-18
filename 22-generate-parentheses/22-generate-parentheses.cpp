class Solution {
public:
    vector<string>ans;
    void calc(string x,int o,int c,int n){
        if(c>o)return;
        if(o>n||c>n)return;
        if(o==n && c==n){
            ans.push_back(x);
            return ;
        }
        calc(x+"(",o+1,c,n);
        calc(x+")",o,c+1,n);
        
        
    }
    vector<string> generateParenthesis(int n) {
        int o=0;
        int c=0;
        string x="";
        calc(x,o,c,n);
  return ans; 
    }
};