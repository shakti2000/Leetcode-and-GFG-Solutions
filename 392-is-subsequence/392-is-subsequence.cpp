class Solution {
public:
    bool isSubsequence(string s, string t) {
        int x=s.length();
        int n=t.length();
        int a=0;
        if(x==0&&n==0)return true;
        if(x>n)return false;
        for(int i=0;i<n;i++){
           // cout<<s[a]<<s[i]<<endl;
            if(s[a]==t[i]){a++;}
            //cout<<a<<","<<i<<endl;
            if(a==x)return true; 
        }
    return false;
    }
};