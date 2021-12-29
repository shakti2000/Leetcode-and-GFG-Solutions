class Solution {
public:
    bool matching(char a,char b){
        if((a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']')){
            return true;
        }else return false;
    }
    bool isValid(string str) {
        stack<char>s;
        for(int i=0;i<str.length();i++){
            char chr=str[i];
            if(str[i]=='('||str[i]=='['||str[i]=='{'){
                s.push(chr);
            }else{
                if(s.empty()==true){
                    return false;
                }else if(matching(s.top(),str[i])==false){
                    return false;
                }else{
                    s.pop();
                }
            }
        }
        return(s.empty()==true);
    }
};