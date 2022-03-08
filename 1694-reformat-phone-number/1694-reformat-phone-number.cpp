class Solution {
public:
    string reformatNumber(string number) {
        int n = number.length();
        string m="";
        for(auto num: number){
            if(num>='0' && num<='9') m+=num;
        }
        int s = m.size();
        string res="";
        int count=0;
        int i=0, temp=s;
        while(temp>4 && i<s){
            res+=m[i];
            res+=m[i+1];
            res+=m[i+2];
            res+='-';
            i+=3;
            temp-=3;
        }
        if(temp==4){
            res+=m[i];
            res+=m[i+1];
            res+='-';
            res+=m[i+2];
            res+=m[i+3];
        }
        else if(temp==3){
            res+=m[i];
            res+=m[i+1];
            res+=m[i+2];
        }
        else{
            res+=m[i];
            res+=m[i+1];
        }
        return res;
    }
};