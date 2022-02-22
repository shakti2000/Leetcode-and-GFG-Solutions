class Solution {
public:
    int titleToNumber(string str) {
        vector<char>v;
        int ct=1;
        unordered_map<char,int>mp;
        for(char i='A';i<='Z';i++){
            mp[i]=ct;
            ct++;
        }
        long long multi=1;
        for(auto it:str){
            v.push_back(it);
        }
        int ans=0;
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            ans+=mp[v[i]]*multi;
            multi*=26;
        }
    return ans;}
};