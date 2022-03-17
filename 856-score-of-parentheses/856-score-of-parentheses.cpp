class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<pair<char,int>> st;
        int ans = 0;
        
        for(auto &it : s){
            if(it == '('){
                st.push({'(',0});
            }else{
                int temp = 0;
                while(st.size() and st.top().first != '('){
                    temp += st.top().second;
                    st.pop();
                } 
                st.pop();
                if(temp == 0) temp = 1;
                else temp *= 2;   
                st.push({'*',temp});
            }
        }
        while(st.size()){
			ans += st.top().second; 
			st.pop();
		}
        return ans;
    }
};