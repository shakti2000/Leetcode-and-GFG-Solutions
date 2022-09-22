class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string ans="";
        for(auto it:s){
            if(it==' '){
                while(st.size()>0){
                    ans+=st.top();
                    st.pop();
                }
                ans+=' ';
                continue;
            }
            st.push(it);
        }
        while(st.size()>0){
                    ans+=st.top();
                    st.pop();
                }
        return ans;
    }
};