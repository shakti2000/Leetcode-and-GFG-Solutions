class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>freq;
        for(auto it:s)freq[it]++;
        //char ans;
        for(auto it:t){
            if(freq[it]==0)return it;
            freq[it]--;
        }
    return 'a';}
};