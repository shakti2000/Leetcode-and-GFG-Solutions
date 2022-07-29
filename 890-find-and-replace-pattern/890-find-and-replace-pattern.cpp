class Solution {
public:
    bool helper(string pattern,vector<int>&check){
       int id=1;
        unordered_map<char,int>mp;
        vector<int>temp;
        for(auto it:pattern){
            if(mp.find(it)==mp.end()){
                mp[it]=id;
                temp.push_back(id);
                id++;
            }else{
                temp.push_back(mp[it]);
            }
        }
        return temp==check;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int id=1;
        unordered_map<char,int>mp;
        vector<int>temp;
        for(auto it:pattern){
            if(mp.find(it)==mp.end()){
                mp[it]=id;
                temp.push_back(id);
                id++;
            }else{
                temp.push_back(mp[it]);
            }
        }
        vector<string>ans;
        for(auto it:words){
            if(helper(it,temp)){
                ans.push_back(it);
            }
        }
        return ans;
    }
};