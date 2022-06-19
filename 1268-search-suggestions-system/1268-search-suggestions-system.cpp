class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& s, string find) {
        map<string,vector<string>>mp;
        for(int i=0;i<s.size();i++){
            string temp="";
            for(int j=0;j<s[i].size();j++){
                temp+=s[i][j];
                mp[temp].push_back(s[i]);
            }
        }
        for(auto &it:mp){
            sort(it.second.begin(),it.second.end());
        }
        vector<vector<string>>ans;
        string temp="";
        for(int i=0;i<find.length();i++){
            temp+=find[i];
            vector<string>helper;
            vector<string>x=mp[temp];
            for(int j=0;j<3&&j<mp[temp].size();j++){
                helper.push_back(x[j]);
            }
            ans.push_back(helper);
        }
    return ans;}
};