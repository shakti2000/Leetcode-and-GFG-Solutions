class Solution {
public:
    bool chackpal(string &s){
        int l=0;
        int r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r])return false;
            l++;r--;
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(chackpal(s))return 1;
        return 2;
        
    }
};