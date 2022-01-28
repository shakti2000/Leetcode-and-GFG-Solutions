class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>us;
        int i=0;
        int j=0;
        int cl=0;
        int ml=0;
        for(int i=0;i<s.length();i++){
           if(us.find(s[i])==us.end()){
               us.insert(s[i]);
               cl=i-j+1;
               if(cl>ml)ml=cl;
           }else{
               {
               while(s[j]!=s[i]){
                   us.erase(s[j]);
                   j++;
               }j++;}
           }
        }
    return ml;
    }
};