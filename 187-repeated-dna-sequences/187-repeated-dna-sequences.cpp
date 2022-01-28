class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        int i = 0, j = 0, k = 10;
        unordered_map<string, int> freq;
        vector<string>ans;
        while(j<s.size())
        {
            if(j - i +1 == k)
            {
                string sub = s.substr(i, k);
                freq[sub]++;
                if(freq[sub]  == 2)
                    ans.push_back(sub);
                i++;
            }
            j++;
        }
        return ans;
    }
};