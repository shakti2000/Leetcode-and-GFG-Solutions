class Solution {
public:
    int getNum(string s){
        int i=0;
        string num = "";
        while(s[i]!='/'){
            num = num + s[i];
            i++;
        }
        return stoi(num);
    }
    int getDen(string s){
        int i=0;
        string num = "";
        while(s[i]!='/'){
            i++;
        }
        return stoi(s.substr(i+1));
    }
    int getHcf(int a, int b){
        if(b==0)
            return a;
        return getHcf(b, a%b);
    }
    string doOperation(string s1, string s2){
        int num1 = getNum(s1);
        int den1 = getDen(s1);
        int num2 = getNum(s2);
        int den2 = getDen(s2);
        
        int den = den1*den2;
        int num = num1*den2 + num2*den1;
        
        int hcf = getHcf(num, den);
        num = num/hcf;
        den = den/hcf;
        int sign = 1;
        if(num<0){
            sign*=-1;
        }
        if(den<0){
            sign*=-1;
        }
        num = sign*abs(num);
        den = abs(den);
        return to_string(num)+"/"+to_string(den);
    }
    string fractionAddition(string s) {
        int n = s.length();
        string ans="";
        stack<string> st;
        int i=0;
        while(i<n){
            string t = "";
            do{
                t=t+s[i];
                i++;
            }while(i<n && (s[i]!='+'&&s[i]!='-'));
            st.push(t);
        }
        
        while(st.size()>1){
            string num1 = st.top();
            st.pop();
            string num2 = st.top();
            st.pop();
            
            st.push(doOperation(num1, num2));
        }
        return st.top();
    }
};
