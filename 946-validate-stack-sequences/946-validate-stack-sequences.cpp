class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int index_pop = 0;
		
        for(int num : pushed) {
            st.push(num);
            while(!st.empty() && st.top() == popped[index_pop]) {
                st.pop();
                index_pop++;
            }
        }
        return st.empty();
    }
};