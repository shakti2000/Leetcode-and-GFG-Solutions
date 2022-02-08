class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        
        string s= countAndSay(n-1);
        int size_= s.size();
        string ans="";
        
        int i=0, j=0;
        while(j<size_){
            char ch= s[j];
            int f=0;
            
            while(j<size_ and s[j]==ch){
                j++;  f++;
            }
            ans+= to_string(f);
            ans+= ch;
        }
        
        return ans;
    }
};