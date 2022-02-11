class Solution {
public:
    bool mapchecker(unordered_map<char,int>mp1,unordered_map<char,int>mp2){
        for(auto it:mp1){
            if(mp2[it.first]==it.second)continue;
            else return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        unordered_map<char,int>s1f;
        unordered_map<char,int>s2f;
        for(int i=0;i<s1.length();i++){
            s1f[s1[i]]++;
            s2f[s2[i]]++;
        }
        if(mapchecker(s1f,s2f))return true;
        int z=0;
        for(int i=s1.length();i<s2.length();i++){
            s2f[s2[z++]]--;
            s2f[s2[i]]++;
            if(mapchecker(s1f,s2f))return true;
        }
        return false;
    }
};