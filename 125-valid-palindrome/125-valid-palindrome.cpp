class Solution {
public:
    void print(string &s){
        for(auto it:s)cout<<it;
    }
    bool checker(string&s,int start,int end){
        if(start>=end)return true;
        if(s[start]==s[end])return checker(s,start+1,end-1);
        return false;
    }
    bool isPalindrome(string s) {
        string temp="";
        for(auto it:s){
            if(it>='0'&&it<='9'){
                temp+=it;
                continue;
            }
            if((it>='A'&&it<='Z')||(it>='a'&&it<='z')){
                if(isupper(it)){
                    temp+=tolower(it);
                }else{
                    temp+=it;
                }
            }
        }
      //  print(temp);
        return checker(temp,0,temp.length()-1);
    }
};