class Solution {
public:
    void print(string &s){
        for(auto it:s)cout<<it<<",";
        cout<<endl;
    }
    string reformatNumber(string number) {
        string s="";
        for(int i=0;i<number.length();i++){
            if(number[i]<'0'||number[i]>'9'){
                continue;
            }
            s+=number[i];
        }
        //print(s);
        int rem=s.length()%3;
        if(rem==1)rem=4;
        int temp=0;
        string ans="";
        while(s.length()>rem){
            ans+=s[0];
            s.erase(s.begin());
            temp++;
            if(s.length()!=0 && temp==3){
               // cout<<s.length()<<endl;
                temp=0;
                ans+='-';
            }
        }
        if(rem==4){
            ans+=s[0];
            ans+=s[1];
            ans+='-';
            ans+=s[2];
            ans+=s[3];
        }else{
            for(auto it:s){ans+=it;}
        }
    return ans;}
};