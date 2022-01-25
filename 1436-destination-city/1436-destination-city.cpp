class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>desti;
        unordered_set<string>st;
        for(int i=0;i<paths.size();i++){
            st.insert(paths[i][0]);
            desti.insert(paths[i][1]);
        }
        for(auto it:desti){
           // cout<<it;
            if(st.count(it)==0)return it; 
        }return "";
    }
    
};