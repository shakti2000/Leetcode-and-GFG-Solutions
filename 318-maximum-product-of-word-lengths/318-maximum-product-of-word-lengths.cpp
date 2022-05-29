class Solution {
public:
    static bool shakti(string a,string b){
        return b.length()<a.length();
    }
    int maxProduct(vector<string>& words) {
        vector<unordered_set<char>>st(words.size());
        for(auto &it:words){
            sort(it.begin(),it.end());
        }
        set<int>ans;
        sort(words.begin(),words.end(),shakti);
        for(int i=0;i<words.size();i++){
            for(auto it:words[i])st[i].insert(it);
        }
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                int flag=0;
         //       int ta=0;
                for(auto it:words[i]){
                    if(st[j].find(it)!=st[j].end()){
                        flag=1;
                        break;
                    }
                }
                if(flag!=1)ans.insert( words[i].length()*words[j].length());
                else flag=0;
                
            }
        }
        if(ans.size()==0) return 0;
        else return *(ans.rbegin());
    }
};