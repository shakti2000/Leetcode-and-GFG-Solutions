class Solution {
public:
    string breakPalindrome(string s) {
        if(s.length()==1)return "";
        for(int i=0;i<s.length()/2;i++){
            //if(i==(s.length()-i))conitnue;
         if(s[i]!='a'){s[i]='a';return s;}
        }
        for(int i=s.length()-1;i>=s.length()/2;i--){
            //if(i==(s.length()-i))conitnue;
         if(s[i]!='b'){s[i]='b';return s;}
        }
        return "";
    }
};