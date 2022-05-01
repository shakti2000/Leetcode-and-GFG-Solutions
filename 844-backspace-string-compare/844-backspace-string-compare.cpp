class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>s1;
        vector<char>t1;
        for(auto it:s){
            if(it!='#'){
                s1.push_back(it);
                continue;
            }else{
             if(s1.size()==0)continue;
             else s1.pop_back();
            }
        }
        for(auto it:t){
            if(it!='#'){
                t1.push_back(it);
                continue;
            }else{
             if(t1.size()==0)continue;
             else t1.pop_back();
            }
        }
        if(s1.size()!=t1.size())return false;
        for(auto i=0;i<s1.size();i++){
            if(s1[i]!=t1[i])return false;
        }
    return true;}
};