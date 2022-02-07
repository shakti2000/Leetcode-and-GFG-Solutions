class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char, vector<int>> mp;
        for (int i = 0; i < s.length(); i++)    mp[s[i]].push_back(i);
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            int prev = -1;
            bool flag = true;
            for (int j = 0; j < words[i].length(); j++) {
                char ch = words[i][j];
                auto it = upper_bound(mp[ch].begin(), mp[ch].end(), prev);
                if (it == mp[ch].end()) {
                    flag = false;
                    break;
                }
                prev = *it;
            }
            if (flag)   count++;
        }
        
        return count;
    }
};