class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<pair<char,char>,int>mp;
        map<pair<char,char>,int>same;
        int ans=0;
        int temp=0;
        int flag=0;
        for(auto it:words){
            if(it[1]==it[0]){
                same[{it[1],it[0]}]++;
                continue;
            }
            mp[{it[1],it[0]}]++;
        }
        for(auto it:mp){
            ans+=(4*min(it.second,mp[{it.first.second,it.first.first}]));
            mp[{it.first.second,it.first.first}]=0;
        }
        for(auto it:same){
            if(it.second%2==1)flag=1;
            temp+=(it.second/2)*4;
        }
        
        return ans+temp+flag*2;
    }
                     
};