class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int count = 0;
        for(int i = 0; i < s.length(); ++i) {
            if(s[i] == '(')    ++count;
            else if(s[i] == ')') {
                if(count > 0)   --count;
                else   s[i] = '*';  
            }
        }
        
        count = 0;
        for(int i = s.length()-1; i >= 0 ; --i) {
            if(s[i] == ')')    ++count;
            else if(s[i] == '(') {
                if(count > 0)   --count;
                else   s[i] = '*';              }
        }
            
        string res;
        for(char c : s) {
            if(c != '*')    
                res.push_back(c);
        }
        return res;
    }
};