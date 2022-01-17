class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n = s.size();
        vector<string> words;
        string word = "";
        for(int i=0; i<n; i++) {
            if(s[i] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word+=s[i];
            }
        }
        words.push_back(word);
        
        if(words.size() != pattern.size()) return false;
        unordered_map<char, string> c2s;
        unordered_map<string, char> s2c;
        
        for(int i=0; i<pattern.size(); i++) {
            if(c2s.find(pattern[i]) != c2s.end() && c2s[pattern[i]] != words[i]) {
                return false;
            }
            if(s2c.find(words[i]) != s2c.end() && s2c[words[i]] != pattern[i]) {
                return false;
            }
            c2s[pattern[i]] = words[i];
            s2c[words[i]] = pattern[i];
        }
        return true;
    }
};