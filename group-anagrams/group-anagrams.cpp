class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>>s; 
    for(int i=0 ;i<strs.size();i++ ){
    	string g=strs[i];
    	sort(g.begin(),g.end());
    	s[g].push_back(strs[i]);
	}
	vector<vector<string>>ans;
	for(auto it:s){
		ans.push_back(it.second);
	}

return ans;
    }
};